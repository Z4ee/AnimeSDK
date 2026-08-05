#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class NodeGraphBase; }
namespace System { class String; }

#define NODEGRAPH_GRAPHNODEBRANCH_GET_NODENAME_OFFSET UNITYSDK_OFFSET(0x17FB8D40)
#define NODEGRAPH_GRAPHNODEBRANCH__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB8D80)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphNodeBranch_TypeDefinitionIndex = 55243;

	class GraphNodeBranch : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEBRANCH__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::String* get_NodeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEBRANCH_GET_NODENAME_OFFSET))(this);
		}
	};
}
