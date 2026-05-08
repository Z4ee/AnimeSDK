#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeBase.h"

namespace NodeGraph { class NodeGraphBase; }

#define NODEGRAPH_GRAPHNODEMACROOUTPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x11B33E70)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphNodeMacroOutput_TypeDefinitionIndex = 46735;

	class GraphNodeMacroOutput : public ::NodeGraph::GraphNodeBase
	{
	public:
		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEMACROOUTPUT__CTOR_OFFSET))(this, nodeGraphBase);
		}
	};
}
