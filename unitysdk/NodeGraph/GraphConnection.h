#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeGraph { class GraphInputPort; }
namespace NodeGraph { class GraphOutputPort; }
namespace NodeGraph { template <typename T> class GraphPortList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_GRAPHCONNECTION_ADDOUTPORT_OFFSET UNITYSDK_OFFSET(0x112CD8E0)
#define NODEGRAPH_GRAPHCONNECTION_ONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x112CDA20)
#define NODEGRAPH_GRAPHCONNECTION_REMOVEOUTPORT_OFFSET UNITYSDK_OFFSET(0x112CD990)
#define NODEGRAPH_GRAPHCONNECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x112CD800)
#define NODEGRAPH_GRAPHCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x112CD720)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphConnection_TypeDefinitionIndex = 63113;

	class GraphConnection : public ::System::Object
	{
	public:
		::NodeGraph::GraphPortList_1<::NodeGraph::GraphInputPort*>* _outList; // 0x10
		::NodeGraph::GraphOutputPort* _in; // 0x18

		::System::Void _ctor(::NodeGraph::GraphOutputPort* inPort, ::NodeGraph::GraphInputPort* outPort)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphOutputPort*, ::NodeGraph::GraphInputPort*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHCONNECTION__CTOR_OFFSET))(this, inPort, outPort);
		}

		::System::Void _ctor_1(::NodeGraph::GraphOutputPort* inPort, ::System::Collections::Generic::List_1<::NodeGraph::GraphInputPort*>* outPortList)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphOutputPort*, ::System::Collections::Generic::List_1<::NodeGraph::GraphInputPort*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHCONNECTION__CTOR_1_OFFSET))(this, inPort, outPortList);
		}

		::System::Void AddOutPort(::NodeGraph::GraphInputPort* outPort)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphInputPort*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHCONNECTION_ADDOUTPORT_OFFSET))(this, outPort);
		}

		::System::Void RemoveOutPort(::NodeGraph::GraphInputPort* outPort)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphInputPort*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHCONNECTION_REMOVEOUTPORT_OFFSET))(this, outPort);
		}

		::System::Void OnTriggered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHCONNECTION_ONTRIGGERED_OFFSET))(this);
		}
	};
}
