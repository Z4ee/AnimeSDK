#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHandBookHadalWidgetWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18125D50)
#define MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONSHOPBTNCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x18125D60)
#define MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONSHOPBTNCLICK_B__1_OFFSET UNITYSDK_OFFSET(0x181260A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookHadalWidgetWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 51709;

	class UIHandBookHadalWidgetWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHandBookHadalWidgetWidgetController* __4__this; // 0x10
		::System::Action* __9__1; // 0x18
		::System::Boolean showHintInHadalShopTab; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnShopBtnClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONSHOPBTNCLICK_B__0_OFFSET))(this);
		}

		::System::Void _OnShopBtnClick_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKHADALWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONSHOPBTNCLICK_B__1_OFFSET))(this);
		}
	};
}
