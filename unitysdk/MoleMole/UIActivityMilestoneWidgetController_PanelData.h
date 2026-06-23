#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18759C40)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityMilestoneWidgetController_PanelData_TypeDefinitionIndex = 69432;

	class UIActivityMilestoneWidgetController_PanelData : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}
	};
}
