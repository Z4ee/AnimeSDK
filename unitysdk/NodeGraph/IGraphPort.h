#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphPortDirection.h"
#include "unitysdk/NodeGraph/GraphPortType.h"
#include "unitysdk/System/Object.h"

namespace NodeGraph { class GraphNodeBase; }
namespace System { class String; }

#define NODEGRAPH_IGRAPHPORT_GET_PORTNAME_OFFSET UNITYSDK_OFFSET(0xD452160)
#define NODEGRAPH_IGRAPHPORT__CTOR_OFFSET UNITYSDK_OFFSET(0xD452170)

namespace NodeGraph
{
	inline static constexpr unsigned int IGraphPort_TypeDefinitionIndex = 63833;

	class IGraphPort : public ::System::Object
	{
	public:
		::NodeGraph::GraphNodeBase* _node; // 0x10
		::System::String* _PortName_k__BackingField; // 0x18

		::System::Void _ctor(::NodeGraph::GraphNodeBase* node, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphNodeBase*, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHPORT__CTOR_OFFSET))(this, node, name);
		}

		::System::String* get_PortName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHPORT_GET_PORTNAME_OFFSET))(this);
		}
	};
}
