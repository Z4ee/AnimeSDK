#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveStoryLineGameContext; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTORYLINEGAMECONTEXT___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1708D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTORYLINEGAMECONTEXT___C__DISPLAYCLASS22_0___FINISHBATTLEWIN_B__1_OFFSET UNITYSDK_OFFSET(0x1A170DD0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveStoryLineGameContext___c__DisplayClass22_0_TypeDefinitionIndex = 71718;

	class IdleLiveStoryLineGameContext___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveStoryLineGameContext* __4__this; // 0x10
		::System::Boolean isFirstWin; // 0x18
		::System::Boolean isNodeNowFinished; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTORYLINEGAMECONTEXT___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void __FinishBattleWin_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVESTORYLINEGAMECONTEXT___C__DISPLAYCLASS22_0___FINISHBATTLEWIN_B__1_OFFSET))(this);
		}
	};
}
