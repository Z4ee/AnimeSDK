#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFishingContestTipsPopWindowController_StarInfo; }
namespace MoleMole { class UIZenkovWorkbenchScrollViewItemWidgetController; }

#define MOLEMOLE_UIZENKOVWORKBENCHSCROLLVIEWITEMWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11A24160)
#define MOLEMOLE_UIZENKOVWORKBENCHSCROLLVIEWITEMWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x11A24170)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWorkbenchScrollViewItemWidgetController___c__DisplayClass5_0_TypeDefinitionIndex = 87540;

	class UIZenkovWorkbenchScrollViewItemWidgetController___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFishingContestTipsPopWindowController_StarInfo* info; // 0x10
		::MoleMole::UIZenkovWorkbenchScrollViewItemWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHSCROLLVIEWITEMWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWORKBENCHSCROLLVIEWITEMWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this);
		}
	};
}
