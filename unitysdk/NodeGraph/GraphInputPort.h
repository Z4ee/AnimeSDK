#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphPort.h"
#include "unitysdk/NodeGraph/GraphPortDirection.h"

namespace NodeGraph { class GraphNodeBase; }
namespace System { class String; }

#define NODEGRAPH_GRAPHINPUTPORT_ACTIVENODE_OFFSET UNITYSDK_OFFSET(0xD463FF0)
#define NODEGRAPH_GRAPHINPUTPORT_GET_PORTDIRECTION_OFFSET UNITYSDK_OFFSET(0xD463FD0)
#define NODEGRAPH_GRAPHINPUTPORT__CTOR_OFFSET UNITYSDK_OFFSET(0xD463FE0)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphInputPort_TypeDefinitionIndex = 71640;

	class GraphInputPort : public ::NodeGraph::GraphPort
	{
	public:
		::System::Void _ctor(::NodeGraph::GraphNodeBase* node, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphNodeBase*, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHINPUTPORT__CTOR_OFFSET))(this, node, name);
		}

		::NodeGraph::GraphPortDirection get_PortDirection()
		{
			return ((::NodeGraph::GraphPortDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHINPUTPORT_GET_PORTDIRECTION_OFFSET))(this);
		}

		static ::System::Void ActiveNode(::NodeGraph::GraphInputPort* port)
		{
			return ((::System::Void(*)(::NodeGraph::GraphInputPort*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHINPUTPORT_ACTIVENODE_OFFSET))(port);
		}
	};
}
