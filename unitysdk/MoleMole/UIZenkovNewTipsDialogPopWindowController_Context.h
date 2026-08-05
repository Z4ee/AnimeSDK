#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVNEWTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B0F020)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovNewTipsDialogPopWindowController_Context_TypeDefinitionIndex = 90739;

	class UIZenkovNewTipsDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnCloseAction; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVNEWTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
