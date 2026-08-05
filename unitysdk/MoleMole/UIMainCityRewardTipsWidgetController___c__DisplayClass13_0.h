#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityRewardTipsWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17AEA040)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS13_0__PLAYREWARDFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x17AEA050)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRewardTipsWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 80701;

	class UIMainCityRewardTipsWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Action* fadeOutCallback; // 0x10
		::MoleMole::UIMainCityRewardTipsWidgetController* __4__this; // 0x18

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
