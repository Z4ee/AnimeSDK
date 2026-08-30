#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"

namespace Entitas { class IInitializeSystem; }
namespace Entitas { class ISystem; }

#define CLASS_1_C243ACBC4B554105_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17F8ABC0)
#define CLASS_1_C243ACBC4B554105__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8AAF0)

inline static constexpr unsigned int Class_1_C243ACBC4B554105_TypeDefinitionIndex = 76293;

class Class_1_C243ACBC4B554105 : public ::System::Object
{
public:
	::Entitas::IInitializeSystem* KCOCCOGPBJB; // 0x10
	::Unity::Profiling::ProfilerMarker FKLNJLGDONA; // 0x18

	::System::Void _ctor(::Entitas::ISystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + CLASS_1_C243ACBC4B554105__CTOR_OFFSET))(this, a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C243ACBC4B554105_INITIALIZE_OFFSET))(this);
	}
};
