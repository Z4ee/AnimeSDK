#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNode_2.h"

namespace MoleMole::Cameras { class BangbooAdjustmentCameraConfig; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERBANGBOOADJUSTMENTCAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A01FEB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERBANGBOOADJUSTMENTCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A020080)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDEnterBangbooAdjustmentCamera_TypeDefinitionIndex = 70468;

	class LDEnterBangbooAdjustmentCamera : public ::FlowCanvas::Nodes::CallableFunctionNode_2<::System::Boolean, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERBANGBOOADJUSTMENTCAMERA__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Cameras::BangbooAdjustmentCameraConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::BangbooAdjustmentCameraConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERBANGBOOADJUSTMENTCAMERA_INVOKE_OFFSET))(this, config);
		}
	};
}
