#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphPortDirection.h"
#include "unitysdk/NodeGraph/IGraphNode.h"

namespace NodeGraph { class GraphNodeMacroInput; }
namespace NodeGraph { class GraphNodeMacroOutput; }
namespace NodeGraph { class IGraphPort; }
namespace NodeGraph { class NodeGraphBase; }
namespace System { class String; }

#define NODEGRAPH_GRAPHNODEMACRORUNTIME_GETPORT_OFFSET UNITYSDK_OFFSET(0xBDFBC50)
#define NODEGRAPH_GRAPHNODEMACRORUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0xBDFBC40)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphNodeMacroRuntime_TypeDefinitionIndex = 47421;

	class GraphNodeMacroRuntime : public ::NodeGraph::IGraphNode
	{
	public:
		::NodeGraph::GraphNodeMacroOutput* _output; // 0x30
		::NodeGraph::GraphNodeMacroInput* _input; // 0x38

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEMACRORUNTIME__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::NodeGraph::IGraphPort* GetPort(::NodeGraph::GraphPortDirection direction, ::System::String* name)
		{
			return ((::NodeGraph::IGraphPort*(*)(::PVOID, ::NodeGraph::GraphPortDirection, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEMACRORUNTIME_GETPORT_OFFSET))(this, direction, name);
		}
	};
}
