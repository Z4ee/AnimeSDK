#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveFuncUnlockFly; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveFuncUnlockFlyService; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9B55F00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE___C__DISPLAYCLASS6_0__SHOWFUNCUNLOCKFLY_B__0_OFFSET UNITYSDK_OFFSET(0x9B56000)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveFuncUnlockFlyService___c__DisplayClass6_0_TypeDefinitionIndex = 69352;

	class IdleLiveFuncUnlockFlyService___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* dest; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveFuncUnlockFlyService* __4__this; // 0x18
		::RPG::Client::ActivityIdleLive::IdleLiveFuncUnlockFly* fly; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowFuncUnlockFly_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE___C__DISPLAYCLASS6_0__SHOWFUNCUNLOCKFLY_B__0_OFFSET))(this);
		}
	};
}
