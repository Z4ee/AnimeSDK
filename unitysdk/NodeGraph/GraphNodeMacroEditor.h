#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeBase.h"

namespace NodeGraph { class GraphNodeMacroInput; }
namespace NodeGraph { class GraphNodeMacroOutput; }
namespace NodeGraph { class NodeGraphBase; }

#define NODEGRAPH_GRAPHNODEMACROEDITOR__CTOR_OFFSET UNITYSDK_OFFSET(0xF4FC8B0)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphNodeMacroEditor_TypeDefinitionIndex = 52539;

	class GraphNodeMacroEditor : public ::NodeGraph::GraphNodeBase
	{
	public:
		::NodeGraph::GraphNodeMacroInput* _input; // 0x58
		::NodeGraph::GraphNodeMacroOutput* _output; // 0x60

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEMACROEDITOR__CTOR_OFFSET))(this, nodeGraphBase);
		}
	};
}
