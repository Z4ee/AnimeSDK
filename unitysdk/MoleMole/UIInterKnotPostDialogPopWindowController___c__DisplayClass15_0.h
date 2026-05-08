#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInterKnotPostDialogPopWindowController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__BINDREPLY_B__0_OFFSET UNITYSDK_OFFSET(0x148B7F40)
#define MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__BINDREPLY_B__1_OFFSET UNITYSDK_OFFSET(0x148B8190)
#define MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x148B7F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotPostDialogPopWindowController___c__DisplayClass15_0_TypeDefinitionIndex = 59041;

	class UIInterKnotPostDialogPopWindowController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInterKnotPostDialogPopWindowController* __4__this; // 0x10
		::System::String* reply; // 0x18
		::System::Action* __9__1; // 0x20
		::System::Int32 nextid; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _BindReply_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__BINDREPLY_B__0_OFFSET))(this);
		}

		::System::Void _BindReply_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTPOSTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__BINDREPLY_B__1_OFFSET))(this);
		}
	};
}
