#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class GraphInputValuePort; }
namespace NodeGraph { class GraphOutputValuePort; }
namespace NodeGraph { class NodeGraphBase; }
namespace System { class String; }

#define NODEGRAPH_GRAPHNODEOPERATIONNODE1_GET_NODENAME_OFFSET UNITYSDK_OFFSET(0x1092FBA0)
#define NODEGRAPH_GRAPHNODEOPERATIONNODE1_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x1092FD50)
#define NODEGRAPH_GRAPHNODEOPERATIONNODE1__CTOR_OFFSET UNITYSDK_OFFSET(0x1092FBE0)
#define NODEGRAPH_GRAPHNODEOPERATIONNODE1___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x1092FE20)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphNodeOperationNode1_TypeDefinitionIndex = 79503;

	class GraphNodeOperationNode1 : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::NodeGraph::GraphOutputValuePort* _outValue; // 0x58
		::NodeGraph::GraphInputValuePort* _inValue; // 0x60

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
