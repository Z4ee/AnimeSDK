#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICoopLevelRewardRowWidgetController; }

#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19376CD0)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__ONCLICKGETREWARD_ASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x19376CE0)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__ONCLICKGETREWARD_ASYNC_B__2_OFFSET UNITYSDK_OFFSET(0x19376CF0)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__ONCLICKGETREWARD_ASYNC_B__3_OFFSET UNITYSDK_OFFSET(0x19376D20)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopLevelRewardRowWidgetController___c__DisplayClass11_0_TypeDefinitionIndex = 82024;

	class UICoopLevelRewardRowWidgetController___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MoleMole::UICoopLevelRewardRowWidgetController* __4__this; // 0x10
		::System::Int32 selectedOptionGiftItemIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickGetReward_Async_b__1(::System::Int32 selectedIndex, ::System::Int32 selectedItemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__ONCLICKGETREWARD_ASYNC_B__1_OFFSET))(this, selectedIndex, selectedItemID);
		}

		::System::Boolean _OnClickGetReward_Async_b__2(::System::Int32 itemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__ONCLICKGETREWARD_ASYNC_B__2_OFFSET))(this, itemID);
		}

		::System::Boolean _OnClickGetReward_Async_b__3(::System::Int32 itemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER___C__DISPLAYCLASS11_0__ONCLICKGETREWARD_ASYNC_B__3_OFFSET))(this, itemID);
		}
	};
}
