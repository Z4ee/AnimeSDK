#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14D85C50)

namespace MoleMole
{
	inline static constexpr unsigned int UIWeakPanelWidgetWidgetController_Context_TypeDefinitionIndex = 77823;

	class UIWeakPanelWidgetWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWEAKPANELWIDGETWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
