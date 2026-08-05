#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelPauseDialogPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS51_0__BINDCLOSEACTION_B__0_OFFSET UNITYSDK_OFFSET(0x17C0C630)
#define MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17C0C620)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseDialogPopWindowController___c__DisplayClass51_0_TypeDefinitionIndex = 59714;

	class UIInLevelPauseDialogPopWindowController___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UIInLevelPauseDialogPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Void _BindCloseAction_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS51_0__BINDCLOSEACTION_B__0_OFFSET))(this);
		}
	};
}
