#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole { class UIZenkovRoleInfoTabWidgetController_Context; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVROLEINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11C2AE50)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovRoleInfoDialogPopWindowController_Context_TypeDefinitionIndex = 82325;

	class UIZenkovRoleInfoDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::UIZenkovRoleInfoTabWidgetController_Context*>* RoleInfo; // 0x28
		::System::Int32 DefaultIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVROLEINFODIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
