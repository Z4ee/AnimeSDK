#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityRewardTipsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15744C60)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__PLAYREWARDFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x15744C70)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRewardTipsWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 82921;

	class UIMainCityRewardTipsWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityRewardTipsWidgetController* __4__this; // 0x10
		::System::Action* fadeOutCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRewardFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__PLAYREWARDFADEOUT_B__0_OFFSET))(this);
		}
	};
}
