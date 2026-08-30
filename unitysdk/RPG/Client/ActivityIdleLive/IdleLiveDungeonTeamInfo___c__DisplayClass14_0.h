#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC5B3580)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO___C__DISPLAYCLASS14_0__REMOVETEAMAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0xC5B4500)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonTeamInfo___c__DisplayClass14_0_TypeDefinitionIndex = 74922;

	class IdleLiveDungeonTeamInfo___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveTeamAvatar_b__0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONTEAMINFO___C__DISPLAYCLASS14_0__REMOVETEAMAVATAR_B__0_OFFSET))(this, a1);
		}
	};
}
