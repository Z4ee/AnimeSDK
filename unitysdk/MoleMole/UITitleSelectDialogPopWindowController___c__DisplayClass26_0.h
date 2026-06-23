#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITitleSelectDialogPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10894CB0)
#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__SENDAPPLYMEDALSETTING_B__0_OFFSET UNITYSDK_OFFSET(0x10894CC0)

namespace MoleMole
{
	inline static constexpr unsigned int UITitleSelectDialogPopWindowController___c__DisplayClass26_0_TypeDefinitionIndex = 65512;

	class UITitleSelectDialogPopWindowController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::Action* onSuccess; // 0x10
		::MoleMole::UITitleSelectDialogPopWindowController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendApplyMedalSetting_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__SENDAPPLYMEDALSETTING_B__0_OFFSET))(this);
		}
	};
}
