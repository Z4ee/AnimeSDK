#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/WaypointRefreshReason.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_6992FBCA02C33988_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x93445D0)
#define CLASS_1_6992FBCA02C33988_METHOD_1_26DDE114DFE53C25_OFFSET UNITYSDK_OFFSET(0x9344450)
#define CLASS_1_6992FBCA02C33988_METHOD_1_F6B48A42970B70C6_OFFSET UNITYSDK_OFFSET(0x93442B0)
#define CLASS_1_6992FBCA02C33988__CTOR_OFFSET UNITYSDK_OFFSET(0x93443A0)
#define CLASS_1_6992FBCA02C33988___TRYPREPAREREFRESHCOROUTINE_B__4_0_OFFSET UNITYSDK_OFFSET(0x93446D0)

inline static constexpr unsigned int Class_1_6992FBCA02C33988_TypeDefinitionIndex = 68833;

class Class_1_6992FBCA02C33988 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::Client::NavMap::WaypointRefreshReason>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6992FBCA02C33988__CTOR_OFFSET))(this);
	}

	static ::Class_1_6992FBCA02C33988* Method_1_F6B48A42970B70C6()
	{
		return ((::Class_1_6992FBCA02C33988*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6992FBCA02C33988_METHOD_1_F6B48A42970B70C6_OFFSET))();
	}

	::System::Void Method_1_26DDE114DFE53C25(::RPG::Client::NavMap::WaypointRefreshReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::WaypointRefreshReason))((::PBYTE)hIl2Cpp + CLASS_1_6992FBCA02C33988_METHOD_1_26DDE114DFE53C25_OFFSET))(this, a1);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6992FBCA02C33988_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void __TryPrepareRefreshCoroutine_b__4_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6992FBCA02C33988___TRYPREPAREREFRESHCOROUTINE_B__4_0_OFFSET))(this);
	}
};
