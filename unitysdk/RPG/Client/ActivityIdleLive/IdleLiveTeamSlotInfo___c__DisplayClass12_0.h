#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotLevelUpReward; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9BD2B90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO___C__DISPLAYCLASS12_0__GETNEXTLEVELUPREWARD_B__0_OFFSET UNITYSDK_OFFSET(0x9BD2E40)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTeamSlotInfo___c__DisplayClass12_0_TypeDefinitionIndex = 69166;

	class IdleLiveTeamSlotInfo___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::UInt32 limitLevel; // 0x10
		::System::UInt32 level; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetNextLevelUpReward_b__0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotLevelUpReward* r)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotLevelUpReward*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMSLOTINFO___C__DISPLAYCLASS12_0__GETNEXTLEVELUPREWARD_B__0_OFFSET))(this, r);
		}
	};
}
