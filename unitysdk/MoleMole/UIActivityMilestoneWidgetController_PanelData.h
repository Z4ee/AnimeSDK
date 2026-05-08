#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER_PANELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15E9BB00)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityMilestoneWidgetController_PanelData_TypeDefinitionIndex = 50219;

	class UIActivityMilestoneWidgetController_PanelData : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMILESTONEWIDGETCONTROLLER_PANELDATA__CTOR_OFFSET))(this);
		}
	};
}
