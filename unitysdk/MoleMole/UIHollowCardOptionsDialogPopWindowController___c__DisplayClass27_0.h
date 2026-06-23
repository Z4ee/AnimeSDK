#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowCardOptionsDialogPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16D432D0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__PLAYFADEOUTANDCLOSE_B__0_OFFSET UNITYSDK_OFFSET(0x16D44BE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsDialogPopWindowController___c__DisplayClass27_0_TypeDefinitionIndex = 72877;

	class UIHollowCardOptionsDialogPopWindowController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowCardOptionsDialogPopWindowController* __4__this; // 0x10
		::System::Action* finish; // 0x18

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
