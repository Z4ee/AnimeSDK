#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowCardOptionsDialogPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE1AF0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__PLAYFADEOUTANDCLOSE_B__0_OFFSET UNITYSDK_OFFSET(0x18EE3410)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsDialogPopWindowController___c__DisplayClass27_0_TypeDefinitionIndex = 87598;

	class UIHollowCardOptionsDialogPopWindowController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::System::Action* finish; // 0x10
		::MoleMole::UIHollowCardOptionsDialogPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayFadeOutAndClose_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__PLAYFADEOUTANDCLOSE_B__0_OFFSET))(this);
		}
	};
}
