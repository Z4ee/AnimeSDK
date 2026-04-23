#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9B7CF70)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO___C__DISPLAYCLASS15_0__REMOVETEAMAVATAR_B__0_OFFSET UNITYSDK_OFFSET(0x9B7E300)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveTeamInfo___c__DisplayClass15_0_TypeDefinitionIndex = 69161;

	class IdleLiveTeamInfo___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::UInt32 avatarId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveTeamAvatar_b__0(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* slot)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVETEAMINFO___C__DISPLAYCLASS15_0__REMOVETEAMAVATAR_B__0_OFFSET))(this, slot);
		}
	};
}
