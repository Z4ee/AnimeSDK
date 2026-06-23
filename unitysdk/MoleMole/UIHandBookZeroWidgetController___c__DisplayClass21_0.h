#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHandBookZeroWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1720ADC0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS21_0__ONSHOPBTNCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x1720ADD0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS21_0__ONSHOPBTNCLICK_B__1_OFFSET UNITYSDK_OFFSET(0x1720B110)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookZeroWidgetController___c__DisplayClass21_0_TypeDefinitionIndex = 83472;

	class UIHandBookZeroWidgetController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHandBookZeroWidgetController* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Boolean showHintInHadalShopTab; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShopBtnClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS21_0__ONSHOPBTNCLICK_B__0_OFFSET))(this);
		}

		::System::Void _OnShopBtnClick_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__DISPLAYCLASS21_0__ONSHOPBTNCLICK_B__1_OFFSET))(this);
		}
	};
}
