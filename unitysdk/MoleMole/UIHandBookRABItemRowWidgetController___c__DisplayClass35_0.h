#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHandBookRABItemRowWidgetController_RABSectionType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16AB4880)
#define MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__DISPLAYCLASS35_0__ONGOBUTTONCLICK_B__0_OFFSET UNITYSDK_OFFSET(0x16AB4890)
#define MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__DISPLAYCLASS35_0__ONGOBUTTONCLICK_B__1_OFFSET UNITYSDK_OFFSET(0x16AB49B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookRABItemRowWidgetController___c__DisplayClass35_0_TypeDefinitionIndex = 42661;

	class UIHandBookRABItemRowWidgetController___c__DisplayClass35_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UIHandBookRABItemRowWidgetController_RABSectionType sectionType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnGoButtonClick_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__DISPLAYCLASS35_0__ONGOBUTTONCLICK_B__0_OFFSET))(this);
		}

		::System::Void _OnGoButtonClick_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__DISPLAYCLASS35_0__ONGOBUTTONCLICK_B__1_OFFSET))(this);
		}
	};
}
