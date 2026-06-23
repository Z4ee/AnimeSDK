#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class NodeGraphBase; }
namespace System { class String; }

#define NODEGRAPH_GRAPHNODEEND_GET_NODENAME_OFFSET UNITYSDK_OFFSET(0x102C9870)
#define NODEGRAPH_GRAPHNODEEND_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x102C9980)
#define NODEGRAPH_GRAPHNODEEND__CTOR_OFFSET UNITYSDK_OFFSET(0x102C98B0)
#define NODEGRAPH_GRAPHNODEEND___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x102C99E0)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphNodeEnd_TypeDefinitionIndex = 71116;

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
