#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace MoleMole { class UIUrbanMapNavigationTeleportRowWidgetController; }

#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15140D00)
#define MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONUIINIT_B__3_OFFSET UNITYSDK_OFFSET(0x15140D10)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapNavigationTeleportRowWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 59632;

	class UIUrbanMapNavigationTeleportRowWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UIUrbanMapNavigationTeleportRowWidgetController* __4__this; // 0x10
		::MoleMole::UIGeneralTipsPopWindowController* tipController; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPNAVIGATIONTELEPORTROWWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONUIINIT_B__3_OFFSET))(this);
		}
	};
}
