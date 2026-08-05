#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_HADALZONE_LAYERV2CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17BE85B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LayerV2WidgetController_HadalZone_LayerV2Context_TypeDefinitionIndex = 81174;

	class UIHadalZone_LayerV2WidgetController_HadalZone_LayerV2Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERV2WIDGETCONTROLLER_HADALZONE_LAYERV2CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
