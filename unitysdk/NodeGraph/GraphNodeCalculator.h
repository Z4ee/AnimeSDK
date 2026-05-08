#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeBase.h"

namespace NodeGraph { class GraphOutputValuePort; }
namespace NodeGraph { class NodeGraphBase; }

#define NODEGRAPH_GRAPHNODECALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x161439E0)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphNodeCalculator_TypeDefinitionIndex = 74862;

	class GraphNodeCalculator : public ::NodeGraph::GraphNodeBase
	{
	public:
		::NodeGraph::GraphOutputValuePort* _valuePort; // 0x58

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODECALCULATOR__CTOR_OFFSET))(this, nodeGraphBase);
		}
	};
}
