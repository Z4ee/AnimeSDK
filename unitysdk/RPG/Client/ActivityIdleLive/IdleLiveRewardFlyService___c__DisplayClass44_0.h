#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipEffectBallFly; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveRewardFlyService; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE___C__DISPLAYCLASS44_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A168960)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE___C__DISPLAYCLASS44_0__SHOWEQUIPEFFECTBALL_B__0_OFFSET UNITYSDK_OFFSET(0x1A1697E0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveRewardFlyService___c__DisplayClass44_0_TypeDefinitionIndex = 71706;

	class IdleLiveRewardFlyService___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveRewardFlyService* __4__this; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveEquipEffectBallFly* equipEffectFly; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE___C__DISPLAYCLASS44_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowEquipEffectBall_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE___C__DISPLAYCLASS44_0__SHOWEQUIPEFFECTBALL_B__0_OFFSET))(this);
		}
	};
}
