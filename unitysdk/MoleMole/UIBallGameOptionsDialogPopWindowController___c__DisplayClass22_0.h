#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBallGameOptionsDialogPopWindowController; }
namespace MoleMole { class UIGeneralToggleWidgetController; }

#define MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F36AB20)
#define MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS22_0__INITEVENT_B__0_OFFSET UNITYSDK_OFFSET(0x1F36AB30)
#define MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS22_0__INITEVENT_B__1_OFFSET UNITYSDK_OFFSET(0x1F36AD00)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameOptionsDialogPopWindowController___c__DisplayClass22_0_TypeDefinitionIndex = 93220;

	class UIBallGameOptionsDialogPopWindowController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralToggleWidgetController* toggle; // 0x10
		::MoleMole::UIBallGameOptionsDialogPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitEvent_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS22_0__INITEVENT_B__0_OFFSET))(this);
		}

		::System::Void _InitEvent_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS22_0__INITEVENT_B__1_OFFSET))(this);
		}
	};
}
