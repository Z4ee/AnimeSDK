#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphPort.h"
#include "unitysdk/NodeGraph/GraphPortDirection.h"

namespace NodeGraph { class GraphNodeBase; }
namespace System { class Action; }
namespace System { class String; }

#define NODEGRAPH_GRAPHOUTPUTPORT_GET_PORTDIRECTION_OFFSET UNITYSDK_OFFSET(0x1071B470)
#define NODEGRAPH_GRAPHOUTPUTPORT_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1071B490)
#define NODEGRAPH_GRAPHOUTPUTPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1071B480)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphOutputPort_TypeDefinitionIndex = 46913;

	class GraphOutputPort : public ::NodeGraph::GraphPort
	{
	public:
		::System::Action* OnTriggered; // 0x20

		::System::Void _ctor(::NodeGraph::GraphNodeBase* node, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphNodeBase*, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHOUTPUTPORT__CTOR_OFFSET))(this, node, name);
		}

		::NodeGraph::GraphPortDirection get_PortDirection()
		{
			return ((::NodeGraph::GraphPortDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHOUTPUTPORT_GET_PORTDIRECTION_OFFSET))(this);
		}

		::System::Void Trigger(::System::Boolean setDone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHOUTPUTPORT_TRIGGER_OFFSET))(this, setDone);
		}
	};
}
