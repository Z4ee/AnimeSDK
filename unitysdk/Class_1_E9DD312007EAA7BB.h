#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"

namespace Entitas { class IExecuteSystem; }
namespace Entitas { class ISystem; }

#define CLASS_1_E9DD312007EAA7BB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x163E6A10)
#define CLASS_1_E9DD312007EAA7BB__CTOR_OFFSET UNITYSDK_OFFSET(0x163E6920)

inline static constexpr unsigned int Class_1_E9DD312007EAA7BB_TypeDefinitionIndex = 76294;

class Class_1_E9DD312007EAA7BB : public ::System::Object
{
public:
	::Entitas::IExecuteSystem* KCOCCOGPBJB; // 0x10
	::Unity::Profiling::ProfilerMarker FKLNJLGDONA; // 0x18

	::System::Void _ctor(::Entitas::ISystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + CLASS_1_E9DD312007EAA7BB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9DD312007EAA7BB_EXECUTE_OFFSET))(this);
	}
};
