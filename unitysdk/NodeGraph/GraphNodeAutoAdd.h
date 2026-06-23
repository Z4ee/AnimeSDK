#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeCalculator.h"

namespace NodeGraph { class NodeGraphBase; }
namespace System { class String; }

#define NODEGRAPH_GRAPHNODEAUTOADD_GET_NODENAME_OFFSET UNITYSDK_OFFSET(0xEBE1960)
#define NODEGRAPH_GRAPHNODEAUTOADD_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xEBE1B60)
#define NODEGRAPH_GRAPHNODEAUTOADD__CTOR_OFFSET UNITYSDK_OFFSET(0xEBE19A0)
#define NODEGRAPH_GRAPHNODEAUTOADD___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xEBE1DA0)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphNodeAutoAdd_TypeDefinitionIndex = 61250;

	class GraphNodeAutoAdd : public ::NodeGraph::GraphNodeCalculator
	{
	public:
		::System::Int32 index; // 0x60

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEAUTOADD__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::String* get_NodeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEAUTOADD_GET_NODENAME_OFFSET))(this);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEAUTOADD_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEAUTOADD___BASE_ONNODEACTIVE_OFFSET))(this);
		}
	};
}
