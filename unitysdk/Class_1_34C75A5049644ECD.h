#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/WaypointRefreshReason.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_34C75A5049644ECD_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x15A32740)
#define CLASS_1_34C75A5049644ECD_METHOD_1_749041D2678506D6_OFFSET UNITYSDK_OFFSET(0x15A326B0)
#define CLASS_1_34C75A5049644ECD_METHOD_1_F6B48A42970B70C6_OFFSET UNITYSDK_OFFSET(0x15A32510)
#define CLASS_1_34C75A5049644ECD__CTOR_OFFSET UNITYSDK_OFFSET(0x15A32600)
#define CLASS_1_34C75A5049644ECD___TRYPREPAREREFRESHCOROUTINE_B__4_0_OFFSET UNITYSDK_OFFSET(0x15A32850)

inline static constexpr unsigned int Class_1_34C75A5049644ECD_TypeDefinitionIndex = 74468;

class Class_1_34C75A5049644ECD : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::Client::NavMap::WaypointRefreshReason>* AFCHLNOLMJP; // 0x10
	::System::Boolean ABMBGMBFELK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34C75A5049644ECD__CTOR_OFFSET))(this);
	}

	static ::Class_1_34C75A5049644ECD* Method_1_F6B48A42970B70C6()
	{
		return ((::Class_1_34C75A5049644ECD*(*)())((::PBYTE)hIl2Cpp + CLASS_1_34C75A5049644ECD_METHOD_1_F6B48A42970B70C6_OFFSET))();
	}

	::System::Void Method_1_749041D2678506D6(::RPG::Client::NavMap::WaypointRefreshReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::WaypointRefreshReason))((::PBYTE)hIl2Cpp + CLASS_1_34C75A5049644ECD_METHOD_1_749041D2678506D6_OFFSET))(this, a1);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34C75A5049644ECD_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void __TryPrepareRefreshCoroutine_b__4_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34C75A5049644ECD___TRYPREPAREREFRESHCOROUTINE_B__4_0_OFFSET))(this);
	}
};
