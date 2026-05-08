#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIVHSStoreDialogV2PopWindowController_Logic.h"

namespace MoleMole { class UIVHSStoreDialogV2PopWindowController; }

#define MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER_DEFAULTLOGIC__CTOR_OFFSET UNITYSDK_OFFSET(0x137B90D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreDialogV2PopWindowController_DefaultLogic_TypeDefinitionIndex = 67897;

	class UIVHSStoreDialogV2PopWindowController_DefaultLogic : public ::MoleMole::UIVHSStoreDialogV2PopWindowController_Logic
	{
	public:
		::System::Void _ctor(::MoleMole::UIVHSStoreDialogV2PopWindowController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVHSStoreDialogV2PopWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER_DEFAULTLOGIC__CTOR_OFFSET))(this, controller);
		}
	};
}
