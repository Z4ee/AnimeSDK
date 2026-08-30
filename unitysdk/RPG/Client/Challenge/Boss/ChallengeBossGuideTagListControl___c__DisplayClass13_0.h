#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Challenge::Boss { class ChallengeBossGuideTagListControl; }

#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C85EC80)
#define RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL___C__DISPLAYCLASS13_0___ONITEMCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0x1C85EEE0)

namespace RPG::Client::Challenge::Boss
{
	inline static constexpr unsigned int ChallengeBossGuideTagListControl___c__DisplayClass13_0_TypeDefinitionIndex = 80314;

	class ChallengeBossGuideTagListControl___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::Client::Challenge::Boss::ChallengeBossGuideTagListControl* __4__this; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnItemChange_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_BOSS_CHALLENGEBOSSGUIDETAGLISTCONTROL___C__DISPLAYCLASS13_0___ONITEMCHANGE_B__0_OFFSET))(this);
		}
	};
}
