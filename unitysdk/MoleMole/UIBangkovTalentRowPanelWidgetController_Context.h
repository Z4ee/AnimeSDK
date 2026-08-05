#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBANGKOVTALENTROWPANELWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1602EA30)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovTalentRowPanelWidgetController_Context_TypeDefinitionIndex = 57443;

	class UIBangkovTalentRowPanelWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVTALENTROWPANELWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
