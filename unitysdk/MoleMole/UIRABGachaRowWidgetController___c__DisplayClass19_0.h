#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABGachaRewardListDialogPopWindowController; }
namespace MoleMole { class UIRABGachaRowWidgetController; }

#define MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5DFA0)
#define MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__ONPULLSUCCESSSHOWREWARD_B__1_OFFSET UNITYSDK_OFFSET(0x15F5DFB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABGachaRowWidgetController___c__DisplayClass19_0_TypeDefinitionIndex = 53099;

	class UIRABGachaRowWidgetController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRABGachaRowWidgetController* __4__this; // 0x10
		::MoleMole::UIRABGachaRewardListDialogPopWindowController* rewardCtrl; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnPullSuccessShowReward_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABGACHAROWWIDGETCONTROLLER___C__DISPLAYCLASS19_0__ONPULLSUCCESSSHOWREWARD_B__1_OFFSET))(this);
		}
	};
}
