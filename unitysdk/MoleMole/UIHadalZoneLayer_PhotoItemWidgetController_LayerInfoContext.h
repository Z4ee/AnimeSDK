#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_3BE9E985CC6DA44B;

#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER_LAYERINFOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x199D3BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZoneLayer_PhotoItemWidgetController_LayerInfoContext_TypeDefinitionIndex = 66140;

	class UIHadalZoneLayer_PhotoItemWidgetController_LayerInfoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_3_3BE9E985CC6DA44B* record; // 0x28
		::System::Int32 layerId; // 0x30
		::System::Int32 zoneId; // 0x34
		::System::Boolean isFixed; // 0x38
		::System::Int32 layerIndex; // 0x3C
		::System::Int32 totalLayerCount; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER_LAYERINFOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
