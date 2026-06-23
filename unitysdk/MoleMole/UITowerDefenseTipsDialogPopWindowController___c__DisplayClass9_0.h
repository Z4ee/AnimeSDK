#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITowerDefenseTipsDialogPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UITOWERDEFENSETIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x157C59F0)
#define MOLEMOLE_UITOWERDEFENSETIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__REFRESHENHANCE_B__0_OFFSET UNITYSDK_OFFSET(0x157C5A00)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerDefenseTipsDialogPopWindowController___c__DisplayClass9_0_TypeDefinitionIndex = 44309;

	class UITowerDefenseTipsDialogPopWindowController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UITowerDefenseTipsDialogPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSETIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshEnhance_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERDEFENSETIPSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS9_0__REFRESHENHANCE_B__0_OFFSET))(this);
		}
	};
}
