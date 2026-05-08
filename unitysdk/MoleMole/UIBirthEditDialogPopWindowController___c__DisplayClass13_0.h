#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBirthEditDialogPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIBIRTHEDITDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1564BBF0)
#define MOLEMOLE_UIBIRTHEDITDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__FINALSETBIRTHDAY_B__0_OFFSET UNITYSDK_OFFSET(0x1564BC00)
#define MOLEMOLE_UIBIRTHEDITDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__FINALSETBIRTHDAY_B__1_OFFSET UNITYSDK_OFFSET(0x1564BDE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBirthEditDialogPopWindowController___c__DisplayClass13_0_TypeDefinitionIndex = 42451;

	class UIBirthEditDialogPopWindowController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UIBirthEditDialogPopWindowController* __4__this; // 0x18
		::System::UInt32 chooseMonth; // 0x20
		::System::UInt32 chooseDay; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIRTHEDITDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _FinalSetBirthday_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIRTHEDITDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__FINALSETBIRTHDAY_B__0_OFFSET))(this);
		}

		::System::Void _FinalSetBirthday_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBIRTHEDITDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS13_0__FINALSETBIRTHDAY_B__1_OFFSET))(this);
		}
	};
}
