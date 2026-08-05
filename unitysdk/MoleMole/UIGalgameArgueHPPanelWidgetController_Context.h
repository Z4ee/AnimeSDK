#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18808E00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgameArgueHPPanelWidgetController_Context_TypeDefinitionIndex = 49842;

	class UIGalgameArgueHPPanelWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEARGUEHPPANELWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
