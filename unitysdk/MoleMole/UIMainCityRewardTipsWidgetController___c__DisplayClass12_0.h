#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityRewardTipsWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1900DD90)
#define MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS12_0__PLAYREWARDFADEIN_B__0_OFFSET UNITYSDK_OFFSET(0x1900DDA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRewardTipsWidgetController___c__DisplayClass12_0_TypeDefinitionIndex = 80700;

	class UIMainCityRewardTipsWidgetController___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::String* stateName; // 0x10
		::MoleMole::UIMainCityRewardTipsWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRewardFadeIn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSWIDGETCONTROLLER___C__DISPLAYCLASS12_0__PLAYREWARDFADEIN_B__0_OFFSET))(this);
		}
	};
}
