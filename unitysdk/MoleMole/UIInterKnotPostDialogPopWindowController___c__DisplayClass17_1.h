#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInterKnotMessageRowWidgetController; }
namespace MoleMole { class UIInterKnotPostDialogPopWindowController___c__DisplayClass17_0; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_1__ADDREPLYTOBOTTOM_B__0_OFFSET UNITYSDK_OFFSET(0x177D6840)
#define MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_1__ADDREPLYTOBOTTOM_B__1_OFFSET UNITYSDK_OFFSET(0x177D68D0)
#define MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_1__ADDREPLYTOBOTTOM_B__2_OFFSET UNITYSDK_OFFSET(0x177D6CC0)
#define MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_1__CTOR_OFFSET UNITYSDK_OFFSET(0x177D6830)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPostDialogPopWindowController___c__DisplayClass17_1_TypeDefinitionIndex = 71202;

	class UIInterKnotPostDialogPopWindowController___c__DisplayClass17_1 : public ::System::Object
	{
	public:
		::MoleMole::UIInterKnotPostDialogPopWindowController___c__DisplayClass17_0* CS___8__locals1; // 0x10
		::System::Action* __9__2; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::UIInterKnotMessageRowWidgetController*>* animCtrl; // 0x20
		::System::Action* __9__1; // 0x28
		::System::Single delayTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_1__CTOR_OFFSET))(this);
		}

		::System::Void _AddReplyToBottom_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_1__ADDREPLYTOBOTTOM_B__0_OFFSET))(this);
		}

		::System::Void _AddReplyToBottom_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_1__ADDREPLYTOBOTTOM_B__1_OFFSET))(this);
		}

		::System::Void _AddReplyToBottom_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS17_1__ADDREPLYTOBOTTOM_B__2_OFFSET))(this);
		}
	};
}
