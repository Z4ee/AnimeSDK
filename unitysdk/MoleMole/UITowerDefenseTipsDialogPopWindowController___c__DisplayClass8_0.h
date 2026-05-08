#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITowerDefenseTipsDialogPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UITOWERDEFENSETIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11B880F0)
#define MOLEMOLE_UITOWERDEFENSETIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__REFRESHBUDDY_B__0_OFFSET UNITYSDK_OFFSET(0x11B88100)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseTipsDialogPopWindowController___c__DisplayClass8_0_TypeDefinitionIndex = 74596;

	class UITowerDefenseTipsDialogPopWindowController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UITowerDefenseTipsDialogPopWindowController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSETIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshBuddy_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSETIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS8_0__REFRESHBUDDY_B__0_OFFSET))(this);
		}
	};
}
