#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas { template <typename T> class IContext_1; }

#define CLASS_1_EC4480DCD50FA282_METHOD_1_8A056624AFD25042_OFFSET UNITYSDK_OFFSET(0x162736C0)

inline static constexpr unsigned int Class_1_EC4480DCD50FA282_TypeDefinitionIndex = 36370;

class Class_1_EC4480DCD50FA282 : public ::System::Object
{
public:
	static ::Entitas::IEntity* Method_1_8A056624AFD25042(::Entitas::IContext* a1, ::System::Int32 a2)
	{
		return ((::Entitas::IEntity*(*)(::Entitas::IContext*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EC4480DCD50FA282_METHOD_1_8A056624AFD25042_OFFSET))(a1, a2);
	}
};
