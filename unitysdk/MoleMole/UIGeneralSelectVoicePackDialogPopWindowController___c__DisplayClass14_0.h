#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralSelectVoicePackDialogPopWindowController_VoicePackData.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralSelectVoicePackDialogPopWindowController; }

#define MOLEMOLE_UIGENERALSELECTVOICEPACKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A316E80)
#define MOLEMOLE_UIGENERALSELECTVOICEPACKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__DOCLICKUNINSTALL_B__0_OFFSET UNITYSDK_OFFSET(0x1A316E90)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralSelectVoicePackDialogPopWindowController___c__DisplayClass14_0_TypeDefinitionIndex = 64859;

	class UIGeneralSelectVoicePackDialogPopWindowController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralSelectVoicePackDialogPopWindowController_VoicePackData voiceData; // 0x10
		::MoleMole::UIGeneralSelectVoicePackDialogPopWindowController* __4__this; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSELECTVOICEPACKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoClickUninstall_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSELECTVOICEPACKDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS14_0__DOCLICKUNINSTALL_B__0_OFFSET))(this);
		}
	};
}
