#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeGraph { class GraphInputValuePort; }
namespace NodeGraph { class GraphOutputValuePort; }
namespace NodeGraph { template <typename T> class GraphPortList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_GRAPHVALUECONNECTION_ADDOUTPORT_OFFSET UNITYSDK_OFFSET(0x17FB9250)
#define NODEGRAPH_GRAPHVALUECONNECTION_REMOVEOUTPORT_OFFSET UNITYSDK_OFFSET(0x17FB9390)
#define NODEGRAPH_GRAPHVALUECONNECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17FB9040)
#define NODEGRAPH_GRAPHVALUECONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17FB8F50)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphValueConnection_TypeDefinitionIndex = 89646;

	class GraphValueConnection : public ::System::Object
	{
	public:
		::NodeGraph::GraphOutputValuePort* _in; // 0x10
		::NodeGraph::GraphPortList_1<::NodeGraph::GraphInputValuePort*>* _outList; // 0x18

		::System::Void _ctor(::NodeGraph::GraphOutputValuePort* inPort, ::NodeGraph::GraphInputValuePort* outPort)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphOutputValuePort*, ::NodeGraph::GraphInputValuePort*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHVALUECONNECTION__CTOR_OFFSET))(this, inPort, outPort);
		}

		::System::Void _ctor_1(::NodeGraph::GraphOutputValuePort* inPort, ::System::Collections::Generic::List_1<::NodeGraph::GraphInputValuePort*>* outPortList)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphOutputValuePort*, ::System::Collections::Generic::List_1<::NodeGraph::GraphInputValuePort*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHVALUECONNECTION__CTOR_1_OFFSET))(this, inPort, outPortList);
		}

		::System::Void AddOutPort(::NodeGraph::GraphInputValuePort* outPort)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphInputValuePort*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHVALUECONNECTION_ADDOUTPORT_OFFSET))(this, outPort);
		}

		::System::Void RemoveOutPort(::NodeGraph::GraphInputValuePort* outPort)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphInputValuePort*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHVALUECONNECTION_REMOVEOUTPORT_OFFSET))(this, outPort);
		}
	};
}
