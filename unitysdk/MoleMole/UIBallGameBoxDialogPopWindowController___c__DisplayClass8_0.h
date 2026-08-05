#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralToggleWidgetController; }

#define MOLEMOLE_UIBALLGAMEBOXDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19307070)
#define MOLEMOLE_UIBALLGAMEBOXDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__ONUIINIT_B__1_OFFSET UNITYSDK_OFFSET(0x19307080)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameBoxDialogPopWindowController___c__DisplayClass8_0_TypeDefinitionIndex = 64270;

	class UIBallGameBoxDialogPopWindowController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralToggleWidgetController* toggle; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEBOXDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEBOXDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__ONUIINIT_B__1_OFFSET))(this);
		}
	};
}
