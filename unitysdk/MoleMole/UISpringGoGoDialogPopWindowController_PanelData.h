#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISPRINGGOGODIALOGPOPWINDOWCONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15C26970)

namespace MoleMole
{
	inline static constexpr unsigned int UISpringGoGoDialogPopWindowController_PanelData_TypeDefinitionIndex = 54442;

	class UISpringGoGoDialogPopWindowController_PanelData : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 Id; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPRINGGOGODIALOGPOPWINDOWCONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}
	};
}
