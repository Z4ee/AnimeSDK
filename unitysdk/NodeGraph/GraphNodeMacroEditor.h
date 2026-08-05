#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeBase.h"

namespace NodeGraph { class GraphNodeMacroInput; }
namespace NodeGraph { class GraphNodeMacroOutput; }
namespace NodeGraph { class NodeGraphBase; }

#define NODEGRAPH_GRAPHNODEMACROEDITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x157CBAF0)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphNodeMacroEditor_TypeDefinitionIndex = 82134;

	class GraphNodeMacroEditor : public ::NodeGraph::GraphNodeBase
	{
	public:
		::NodeGraph::GraphNodeMacroOutput* _output; // 0x58
		::NodeGraph::GraphNodeMacroInput* _input; // 0x60

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEMACROEDITOR__CTOR_OFFSET))(this, nodeGraphBase);
		}
	};
}
