#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDEXITSIDESCROLLINGCAMERAMODEV2_HANDLEFLOWINPUT_OFFSET UNITYSDK_OFFSET(0x15112450)
#define MOLEMOLE_FLOWCANVAS_NODES_LDEXITSIDESCROLLINGCAMERAMODEV2_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x15112320)
#define MOLEMOLE_FLOWCANVAS_NODES_LDEXITSIDESCROLLINGCAMERAMODEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x15112AA0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDExitSideScrollingCameraModeV2_TypeDefinitionIndex = 86773;

	class LDExitSideScrollingCameraModeV2 : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* _tag; // 0xB0
		::FlowCanvas::FlowOutput* _onBlendOutFinished; // 0xB8
		::FlowCanvas::ValueInput_1<::System::Boolean>* _isBlendOutCut; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDEXITSIDESCROLLINGCAMERAMODEV2__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDEXITSIDESCROLLINGCAMERAMODEV2_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void HandleFlowInput(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDEXITSIDESCROLLINGCAMERAMODEV2_HANDLEFLOWINPUT_OFFSET))(this, f);
		}
	};
}
