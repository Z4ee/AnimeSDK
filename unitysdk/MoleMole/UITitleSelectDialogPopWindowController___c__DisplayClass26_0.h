#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITitleSelectDialogPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0xEBCAC50)
#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__SENDAPPLYMEDALSETTING_B__0_OFFSET UNITYSDK_OFFSET(0xEBCAC60)

namespace MoleMole
{
	inline static constexpr unsigned int UITitleSelectDialogPopWindowController___c__DisplayClass26_0_TypeDefinitionIndex = 62083;

	class UITitleSelectDialogPopWindowController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MoleMole::UITitleSelectDialogPopWindowController* __4__this; // 0x10
		::System::Action* onSuccess; // 0x18

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
