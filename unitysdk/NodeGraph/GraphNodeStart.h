#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class NodeGraphBase; }
namespace System { class String; }

#define NODEGRAPH_GRAPHNODESTART_GET_NODENAME_OFFSET UNITYSDK_OFFSET(0x10A11F40)
#define NODEGRAPH_GRAPHNODESTART__CTOR_OFFSET UNITYSDK_OFFSET(0x10A11F80)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphNodeStart_TypeDefinitionIndex = 58047;

	class GraphNodeStart : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODESTART__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::String* get_NodeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODESTART_GET_NODENAME_OFFSET))(this);
		}
	};
}
