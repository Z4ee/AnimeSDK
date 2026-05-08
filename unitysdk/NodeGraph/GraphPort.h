#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphPortType.h"
#include "unitysdk/NodeGraph/IGraphPort.h"

namespace NodeGraph { class GraphNodeBase; }
namespace System { class String; }

#define NODEGRAPH_GRAPHPORT_GET_PORTTYPE_OFFSET UNITYSDK_OFFSET(0xF07AAF0)
#define NODEGRAPH_GRAPHPORT__CTOR_OFFSET UNITYSDK_OFFSET(0xF07AB00)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphPort_TypeDefinitionIndex = 67562;

	class GraphPort : public ::NodeGraph::IGraphPort
	{
	public:
		::System::Void _ctor(::NodeGraph::GraphNodeBase* node, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphNodeBase*, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHPORT__CTOR_OFFSET))(this, node, name);
		}

		::NodeGraph::GraphPortType get_PortType()
		{
			return ((::NodeGraph::GraphPortType(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHPORT_GET_PORTTYPE_OFFSET))(this);
		}
	};
}
