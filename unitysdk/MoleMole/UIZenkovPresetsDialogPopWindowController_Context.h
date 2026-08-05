#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11E53150)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovPresetsDialogPopWindowController_Context_TypeDefinitionIndex = 69585;

	class UIZenkovPresetsDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* BeforeCloseAction; // 0x28
		::System::Int32 DungeonId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVPRESETSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
