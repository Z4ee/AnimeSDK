#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIMAINPLOTRANKDIALOGPOPWINDOWCONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17450090)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainPlotRankDialogPopWindowController_PanelData_TypeDefinitionIndex = 60383;

	class UIMainPlotRankDialogPopWindowController_PanelData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnCloseAction; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPLOTRANKDIALOGPOPWINDOWCONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}
	};
}
