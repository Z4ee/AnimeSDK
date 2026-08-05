#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD3B80)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotStrategyDialogPopWindowController_Context_TypeDefinitionIndex = 86588;

	class UIActivityHotPotStrategyDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean InGame; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTSTRATEGYDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
