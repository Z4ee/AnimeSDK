#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICOOPCLUENEWTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19AA43B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopClueNewTipsDialogPopWindowController_Context_TypeDefinitionIndex = 63401;

	class UICoopClueNewTipsDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean HasNewClueInTaintTheme; // 0x28
		::System::Boolean HasNewClueInLightningTheme; // 0x29
		::System::Boolean HasNewClueInFlameTheme; // 0x2A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUENEWTIPSDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
