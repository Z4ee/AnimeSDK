#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class NodeGraphBase; }
namespace System { class String; }

#define NODEGRAPH_GRAPHNODEEND_GET_NODENAME_OFFSET UNITYSDK_OFFSET(0xEC98AB0)
#define NODEGRAPH_GRAPHNODEEND_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xEC98BC0)
#define NODEGRAPH_GRAPHNODEEND__CTOR_OFFSET UNITYSDK_OFFSET(0xEC98AF0)
#define NODEGRAPH_GRAPHNODEEND___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xEC98C20)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphNodeEnd_TypeDefinitionIndex = 56839;

	class GraphNodeEnd : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEEND__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::String* get_NodeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEEND_GET_NODENAME_OFFSET))(this);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEEND_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEEND___BASE_ONNODEACTIVE_OFFSET))(this);
		}
	};
}
