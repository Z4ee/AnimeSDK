#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonAssistData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonFriendSoltData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9B44970)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__DISPLAYCLASS5_0__TRYREMOVEASSISTDATA_B__0_OFFSET UNITYSDK_OFFSET(0x9B458A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__DISPLAYCLASS5_0__TRYREMOVEASSISTDATA_B__1_OFFSET UNITYSDK_OFFSET(0x9B458C0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonData___c__DisplayClass5_0_TypeDefinitionIndex = 69261;

	class IdleLiveDungeonData___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryRemoveAssistData_b__0(::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonAssistData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__DISPLAYCLASS5_0__TRYREMOVEASSISTDATA_B__0_OFFSET))(this, data);
		}

		::System::Boolean _TryRemoveAssistData_b__1(::RPG::Client::ActivityIdleLive::IdleLiveDungeonFriendSoltData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonFriendSoltData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONDATA___C__DISPLAYCLASS5_0__TRYREMOVEASSISTDATA_B__1_OFFSET))(this, data);
		}
	};
}
