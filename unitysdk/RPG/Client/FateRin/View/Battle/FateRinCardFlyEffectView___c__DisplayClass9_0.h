#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5C77E0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW___C__DISPLAYCLASS9_0__SCHEDULEAFTERDELAY_B__0_OFFSET UNITYSDK_OFFSET(0x1B5C78A0)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinCardFlyEffectView___c__DisplayClass9_0_TypeDefinitionIndex = 79350;

	class FateRinCardFlyEffectView___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _ScheduleAfterDelay_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDFLYEFFECTVIEW___C__DISPLAYCLASS9_0__SCHEDULEAFTERDELAY_B__0_OFFSET))(this);
		}
	};
}
