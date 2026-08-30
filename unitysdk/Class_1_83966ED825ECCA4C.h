#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"

namespace Entitas { class ICleanupSystem; }
namespace Entitas { class ISystem; }

#define CLASS_1_83966ED825ECCA4C_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1631F0C0)
#define CLASS_1_83966ED825ECCA4C__CTOR_OFFSET UNITYSDK_OFFSET(0x1631EFD0)

inline static constexpr unsigned int Class_1_83966ED825ECCA4C_TypeDefinitionIndex = 76296;

class Class_1_83966ED825ECCA4C : public ::System::Object
{
public:
	::Entitas::ICleanupSystem* KCOCCOGPBJB; // 0x10
	::Unity::Profiling::ProfilerMarker FKLNJLGDONA; // 0x18

	::System::Void _ctor(::Entitas::ISystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + CLASS_1_83966ED825ECCA4C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Cleanup()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_83966ED825ECCA4C_CLEANUP_OFFSET))(this);
	}
};
