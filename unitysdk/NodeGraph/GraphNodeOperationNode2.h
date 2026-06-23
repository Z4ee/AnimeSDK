#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class GraphInputValuePort; }
namespace NodeGraph { class GraphOutputValuePort; }
namespace NodeGraph { class NodeGraphBase; }
namespace System { class String; }

#define NODEGRAPH_GRAPHNODEOPERATIONNODE2_GET_NODENAME_OFFSET UNITYSDK_OFFSET(0x117B3BA0)
#define NODEGRAPH_GRAPHNODEOPERATIONNODE2_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x117B3D50)
#define NODEGRAPH_GRAPHNODEOPERATIONNODE2__CTOR_OFFSET UNITYSDK_OFFSET(0x117B3BE0)
#define NODEGRAPH_GRAPHNODEOPERATIONNODE2___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x117B3E20)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphNodeOperationNode2_TypeDefinitionIndex = 43150;

	class GraphNodeOperationNode2 : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::NodeGraph::GraphInputValuePort* _inValue; // 0x58
		::NodeGraph::GraphOutputValuePort* _outValue; // 0x60

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEOPERATIONNODE2__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::String* get_NodeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEOPERATIONNODE2_GET_NODENAME_OFFSET))(this);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEOPERATIONNODE2_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEOPERATIONNODE2___BASE_ONNODEACTIVE_OFFSET))(this);
		}
	};
}
