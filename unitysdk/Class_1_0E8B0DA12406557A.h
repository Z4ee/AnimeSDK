#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/WaypointRefreshReason.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_0E8B0DA12406557A_METHOD_1_4B7B410A1E0D82ED_OFFSET UNITYSDK_OFFSET(0x15D438C0)
#define CLASS_1_0E8B0DA12406557A_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15D43970)
#define CLASS_1_0E8B0DA12406557A_METHOD_1_F6B48A42970B70C6_OFFSET UNITYSDK_OFFSET(0x15D43720)
#define CLASS_1_0E8B0DA12406557A__CTOR_OFFSET UNITYSDK_OFFSET(0x15D43810)
#define CLASS_1_0E8B0DA12406557A___TRYPREPAREREFRESHCOROUTINE_B__4_0_OFFSET UNITYSDK_OFFSET(0x15D43A20)

inline static constexpr unsigned int Class_1_0E8B0DA12406557A_TypeDefinitionIndex = 74595;

class Class_1_0E8B0DA12406557A : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::Client::NavMap::WaypointRefreshReason>* AFCHLNOLMJP; // 0x10
	::System::Boolean ABMBGMBFELK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E8B0DA12406557A__CTOR_OFFSET))(this);
	}

	static ::Class_1_0E8B0DA12406557A* Method_1_F6B48A42970B70C6()
	{
		return ((::Class_1_0E8B0DA12406557A*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0E8B0DA12406557A_METHOD_1_F6B48A42970B70C6_OFFSET))();
	}

	::System::Void Method_1_4B7B410A1E0D82ED(::RPG::Client::NavMap::WaypointRefreshReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::WaypointRefreshReason))((::PBYTE)hIl2Cpp + CLASS_1_0E8B0DA12406557A_METHOD_1_4B7B410A1E0D82ED_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E8B0DA12406557A_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void __TryPrepareRefreshCoroutine_b__4_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E8B0DA12406557A___TRYPREPAREREFRESHCOROUTINE_B__4_0_OFFSET))(this);
	}
};
