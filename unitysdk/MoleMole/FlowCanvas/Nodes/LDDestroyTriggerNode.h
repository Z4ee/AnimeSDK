#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTRIGGERNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x18B1F7B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTRIGGERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B1F8A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTRIGGERNODE__REGISTERPORTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x18B1F8E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDDestroyTriggerNode_TypeDefinitionIndex = 40235;

	class LDDestroyTriggerNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::ValueInput_1<::UnityEngine::GameObject*>* inputTrigger; // 0xA8
		::FlowCanvas::FlowOutput* _output; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTRIGGERNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTRIGGERNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__2_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTRIGGERNODE__REGISTERPORTS_B__2_0_OFFSET))(this, flow);
		}
	};
}
