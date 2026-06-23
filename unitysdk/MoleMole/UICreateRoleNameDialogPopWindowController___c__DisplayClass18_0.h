#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICreateRoleNameDialogContext; }
namespace MoleMole { class UICreateRoleNameDialogPopWindowController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UICREATEROLENAMEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CLOSEWINDOW_B__0_OFFSET UNITYSDK_OFFSET(0x17F74080)
#define MOLEMOLE_UICREATEROLENAMEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CLOSEWINDOW_B__1_OFFSET UNITYSDK_OFFSET(0x17F74120)
#define MOLEMOLE_UICREATEROLENAMEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17F74070)

namespace MoleMole
{
	inline static constexpr unsigned int UICreateRoleNameDialogPopWindowController___c__DisplayClass18_0_TypeDefinitionIndex = 43724;

	class UICreateRoleNameDialogPopWindowController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MoleMole::UICreateRoleNameDialogPopWindowController* __4__this; // 0x10
		::MoleMole::UICreateRoleNameDialogContext* context; // 0x18
		::System::String* cacheInput; // 0x20
		::System::Action* __9__1; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLENAMEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _CloseWindow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLENAMEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CLOSEWINDOW_B__0_OFFSET))(this);
		}

		::System::Void _CloseWindow_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICREATEROLENAMEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS18_0__CLOSEWINDOW_B__1_OFFSET))(this);
		}
	};
}
