#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/LatentActionNodeBase.h"

namespace FlowCanvas { class FlowNode; }
namespace System::Collections { class IEnumerator; }

#define FLOWCANVAS_NODES_LATENTACTIONNODE_ONREGISTERDERIVEDPORTS_OFFSET UNITYSDK_OFFSET(0x1EB6B8D0)
#define FLOWCANVAS_NODES_LATENTACTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6B990)
#define FLOWCANVAS_NODES_LATENTACTIONNODE__ONREGISTERDERIVEDPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x1EB6B9A0)
#define FLOWCANVAS_NODES_LATENTACTIONNODE__ONREGISTERDERIVEDPORTS_B__1_1_OFFSET UNITYSDK_OFFSET(0x1EB6B9F0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int LatentActionNode_TypeDefinitionIndex = 30357;

	class LatentActionNode : public ::FlowCanvas::Nodes::LatentActionNodeBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODE__CTOR_OFFSET))(this);
		}

		::System::Void OnRegisterDerivedPorts(::FlowCanvas::FlowNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowNode*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODE_ONREGISTERDERIVEDPORTS_OFFSET))(this, node);
		}

		::System::Void _OnRegisterDerivedPorts_b__1_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODE__ONREGISTERDERIVEDPORTS_B__1_0_OFFSET))(this, f);
		}

		::System::Void _OnRegisterDerivedPorts_b__1_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_LATENTACTIONNODE__ONREGISTERDERIVEDPORTS_B__1_1_OFFSET))(this, f);
		}
	};
}
