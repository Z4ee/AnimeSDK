#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class GraphInputValuePort; }
namespace NodeGraph { class GraphOutputValuePort; }
namespace NodeGraph { class NodeGraphBase; }
namespace System { class String; }

#define NODEGRAPH_GRAPHNODEOPERATIONNODE1_GET_NODENAME_OFFSET UNITYSDK_OFFSET(0x119591B0)
#define NODEGRAPH_GRAPHNODEOPERATIONNODE1_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x11959360)
#define NODEGRAPH_GRAPHNODEOPERATIONNODE1__CTOR_OFFSET UNITYSDK_OFFSET(0x119591F0)
#define NODEGRAPH_GRAPHNODEOPERATIONNODE1___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x11959430)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphNodeOperationNode1_TypeDefinitionIndex = 58007;

	class GraphNodeOperationNode1 : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::NodeGraph::GraphInputValuePort* _inValue; // 0x58
		::NodeGraph::GraphOutputValuePort* _outValue; // 0x60

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEOPERATIONNODE1__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::String* get_NodeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEOPERATIONNODE1_GET_NODENAME_OFFSET))(this);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEOPERATIONNODE1_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEOPERATIONNODE1___BASE_ONNODEACTIVE_OFFSET))(this);
		}
	};
}
