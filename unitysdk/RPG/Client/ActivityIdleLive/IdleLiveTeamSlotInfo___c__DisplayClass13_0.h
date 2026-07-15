#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotLevelUpReward; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A17EEB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO___C__DISPLAYCLASS13_0__GETLEVELUPREWARD_B__0_OFFSET UNITYSDK_OFFSET(0x1A17F130)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTeamSlotInfo___c__DisplayClass13_0_TypeDefinitionIndex = 71502;

	class IdleLiveTeamSlotInfo___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::UInt32 level; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetLevelUpReward_b__0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotLevelUpReward* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotLevelUpReward*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO___C__DISPLAYCLASS13_0__GETLEVELUPREWARD_B__0_OFFSET))(this, a1);
		}
	};
}
