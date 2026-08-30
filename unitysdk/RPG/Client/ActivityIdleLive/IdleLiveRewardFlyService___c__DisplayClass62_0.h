#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveNormalRewardFly; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveRewardFlyService; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C101C00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE___C__DISPLAYCLASS62_0___SHOWNORMALREWARDFLY_B__0_OFFSET UNITYSDK_OFFSET(0x1C101C60)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveRewardFlyService___c__DisplayClass62_0_TypeDefinitionIndex = 75013;

	class IdleLiveRewardFlyService___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* flyPromise; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveNormalRewardFly* normalFly; // 0x18
		::RPG::Client::ActivityIdleLive::IdleLiveRewardFlyService* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::System::Void __ShowNormalRewardFly_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE___C__DISPLAYCLASS62_0___SHOWNORMALREWARDFLY_B__0_OFFSET))(this);
		}
	};
}
