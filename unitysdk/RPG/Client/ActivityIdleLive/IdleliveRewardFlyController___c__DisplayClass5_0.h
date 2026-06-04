#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveNormalRewardFly; }
namespace RPG::Client::ActivityIdleLive { class IdleliveRewardFlyController; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB176A00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYCONTROLLER___C__DISPLAYCLASS5_0__SHOWBOXFLY_B__0_OFFSET UNITYSDK_OFFSET(0xB176A60)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleliveRewardFlyController___c__DisplayClass5_0_TypeDefinitionIndex = 70064;

	class IdleliveRewardFlyController___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleliveRewardFlyController* __4__this; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveNormalRewardFly* normalFly; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowBoxFly_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYCONTROLLER___C__DISPLAYCLASS5_0__SHOWBOXFLY_B__0_OFFSET))(this);
		}
	};
}
