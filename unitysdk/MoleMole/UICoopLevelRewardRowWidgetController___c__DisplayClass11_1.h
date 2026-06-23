#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }

#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___C__DISPLAYCLASS11_1__CTOR_OFFSET UNITYSDK_OFFSET(0x176174B0)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___C__DISPLAYCLASS11_1__ONCLICKGETREWARD_ASYNC_B__4_OFFSET UNITYSDK_OFFSET(0x176174C0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopLevelRewardRowWidgetController___c__DisplayClass11_1_TypeDefinitionIndex = 51344;

	class UICoopLevelRewardRowWidgetController___c__DisplayClass11_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTipsPopWindowController* ctrl; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___C__DISPLAYCLASS11_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnClickGetReward_Async_b__4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___C__DISPLAYCLASS11_1__ONCLICKGETREWARD_ASYNC_B__4_OFFSET))(this);
		}
	};
}
