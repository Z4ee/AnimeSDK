#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Cameras { class OverrideConfigSideScrollingCamera; }
namespace MoleMole::Cameras { class SideScrollingCameraRuntimeParam; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERSIDESCROLLINGCAMERAMODEV2_HANDLEFLOWINPUT_OFFSET UNITYSDK_OFFSET(0x13A817B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERSIDESCROLLINGCAMERAMODEV2_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x13A81630)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENTERSIDESCROLLINGCAMERAMODEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x13A81F40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDEnterSideScrollingCameraModeV2_TypeDefinitionIndex = 47400;

	class LDEnterSideScrollingCameraModeV2 : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::FlowCanvas::FlowOutput* _onBlendInFinished; // 0xB0
		::FlowCanvas::ValueInput_1<::System::String*>* _cameraModeKey; // 0xB8
		::FlowCanvas::ValueInput_1<::System::String*>* _tag; // 0xC0
		::FlowCanvas::ValueInput_1<::MoleMole::Cameras::OverrideConfigSideScrollingCamera*>* _overrideConfig; // 0xC8
		::FlowCanvas::ValueInput_1<::MoleMole::Cameras::SideScrollingCameraRuntimeParam*>* _param; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERSIDESCROLLINGCAMERAMODEV2__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERSIDESCROLLINGCAMERAMODEV2_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void HandleFlowInput(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENTERSIDESCROLLINGCAMERAMODEV2_HANDLEFLOWINPUT_OFFSET))(this, f);
		}
	};
}
