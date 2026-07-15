#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveGemFly; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveRewardFlyService; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1697D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE___C__DISPLAYCLASS63_0___SHOWGEMREWARDFLY_B__0_OFFSET UNITYSDK_OFFSET(0x1A169870)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveRewardFlyService___c__DisplayClass63_0_TypeDefinitionIndex = 71708;

	class IdleLiveRewardFlyService___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveRewardFlyService* __4__this; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveGemFly* gemFly; // 0x18
		::RPG::Client::Promises::Promise* flyPromise; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
		}

		::System::Void __ShowGemRewardFly_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE___C__DISPLAYCLASS63_0___SHOWGEMREWARDFLY_B__0_OFFSET))(this);
		}
	};
}
