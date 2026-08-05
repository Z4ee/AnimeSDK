#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace MoleMole { class UIMainCityNavigationTeleportRowWidgetController; }

#define MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1651FE90)
#define MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__ONUIINIT_B__2_OFFSET UNITYSDK_OFFSET(0x165202A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityNavigationTeleportRowWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 81104;

	class UIMainCityNavigationTeleportRowWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTipsPopWindowController* tipController; // 0x10
		::MoleMole::UIMainCityNavigationTeleportRowWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__ONUIINIT_B__2_OFFSET))(this);
		}
	};
}
