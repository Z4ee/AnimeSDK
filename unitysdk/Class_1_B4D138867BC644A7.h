#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IEntity; }

#define CLASS_1_B4D138867BC644A7_METHOD_1_64537B3993261384_OFFSET UNITYSDK_OFFSET(0x1817B060)

inline static constexpr unsigned int Class_1_B4D138867BC644A7_TypeDefinitionIndex = 35510;

class Class_1_B4D138867BC644A7 : public ::System::Object
{
public:
	static ::System::Int32 Method_1_64537B3993261384(::Entitas::IEntity* a1)
	{
		return ((::System::Int32(*)(::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B4D138867BC644A7_METHOD_1_64537B3993261384_OFFSET))(a1);
	}
};
