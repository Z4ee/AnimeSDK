#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveFuncUnlockFlyService___c__DisplayClass6_0; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveTimedEffect; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE___C__DISPLAYCLASS6_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC5B9710)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE___C__DISPLAYCLASS6_1__SHOWFUNCUNLOCKFLY_B__1_OFFSET UNITYSDK_OFFSET(0xC5B9720)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveFuncUnlockFlyService___c__DisplayClass6_1_TypeDefinitionIndex = 74995;

	class IdleLiveFuncUnlockFlyService___c__DisplayClass6_1 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveFuncUnlockFlyService___c__DisplayClass6_0* CS___8__locals1; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveTimedEffect* timedEffect; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE___C__DISPLAYCLASS6_1__CTOR_OFFSET))(this);
		}

		::System::Void _ShowFuncUnlockFly_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEFUNCUNLOCKFLYSERVICE___C__DISPLAYCLASS6_1__SHOWFUNCUNLOCKFLY_B__1_OFFSET))(this);
		}
	};
}
