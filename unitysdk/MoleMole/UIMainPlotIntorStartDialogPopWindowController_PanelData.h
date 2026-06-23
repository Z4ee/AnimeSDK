#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_208CC9941471731A_935;
namespace System { class Action; }

#define MOLEMOLE_UIMAINPLOTINTORSTARTDIALOGPOPWINDOWCONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15D8DA60)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainPlotIntorStartDialogPopWindowController_PanelData_TypeDefinitionIndex = 80034;

	class UIMainPlotIntorStartDialogPopWindowController_PanelData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_935* TableInfo; // 0x28
		::System::Action* OnClosePanel; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINPLOTINTORSTARTDIALOGPOPWINDOWCONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}
	};
}
