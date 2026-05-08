#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFishingContestStarWidgetController; }
namespace MoleMole { class UIFishingContestTipsPopWindowController_StarInfo; }

#define MOLEMOLE_UIFISHINGCONTESTSTARWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F6AD30)
#define MOLEMOLE_UIFISHINGCONTESTSTARWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x15F6AD40)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishingContestStarWidgetController___c__DisplayClass5_0_TypeDefinitionIndex = 74386;

	class UIFishingContestStarWidgetController___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFishingContestStarWidgetController* __4__this; // 0x10
		::MoleMole::UIFishingContestTipsPopWindowController_StarInfo* info; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTSTARWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTSTARWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this);
		}
	};
}
