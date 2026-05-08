#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeBase.h"

namespace NodeGraph { class NodeGraphBase; }

#define NODEGRAPH_GRAPHNODEMACROINPUT__CTOR_OFFSET UNITYSDK_OFFSET(0xEC98C30)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphNodeMacroInput_TypeDefinitionIndex = 82991;

	class GraphNodeMacroInput : public ::NodeGraph::GraphNodeBase
	{
	public:
		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEMACROINPUT__CTOR_OFFSET))(this, nodeGraphBase);
		}
	};
}
