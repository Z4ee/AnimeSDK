#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIStrategyGuideSkillUpDialogPopWindowController; }

#define MOLEMOLE_UISTRATEGYGUIDESKILLUPDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17BA4FF0)
#define MOLEMOLE_UISTRATEGYGUIDESKILLUPDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__ONMAXLEVELRECOMMENDTOGGLECLICK_B__0_OFFSET UNITYSDK_OFFSET(0x17BA5000)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideSkillUpDialogPopWindowController___c__DisplayClass11_0_TypeDefinitionIndex = 84241;

	class UIStrategyGuideSkillUpDialogPopWindowController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UIStrategyGuideSkillUpDialogPopWindowController* __4__this; // 0x10
		::System::Boolean newState; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLUPDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnMaxLevelRecommendToggleClick_b__0(::System::Int32 ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDESKILLUPDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS11_0__ONMAXLEVELRECOMMENDTOGGLECLICK_B__0_OFFSET))(this, ret);
		}
	};
}
