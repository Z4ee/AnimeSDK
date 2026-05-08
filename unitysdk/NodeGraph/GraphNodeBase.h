#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphPortDirection.h"
#include "unitysdk/NodeGraph/IGraphNode.h"

namespace NodeGraph { class GraphInputPort; }
namespace NodeGraph { class GraphInputValuePort; }
namespace NodeGraph { class GraphOutputPort; }
namespace NodeGraph { class GraphOutputValuePort; }
namespace NodeGraph { class IGraphPort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_GRAPHNODEBASE_BUILDEXINPUTPORT_OFFSET UNITYSDK_OFFSET(0xD263570)
#define NODEGRAPH_GRAPHNODEBASE_BUILDEXOUTPUTPORT_OFFSET UNITYSDK_OFFSET(0xD263810)
#define NODEGRAPH_GRAPHNODEBASE_BUILDINPUTPORT_OFFSET UNITYSDK_OFFSET(0xD2634F0)
#define NODEGRAPH_GRAPHNODEBASE_BUILDINPUTVALUEPORT_OFFSET UNITYSDK_OFFSET(0xD263680)
#define NODEGRAPH_GRAPHNODEBASE_BUILDOUTPUTPORT_OFFSET UNITYSDK_OFFSET(0xD263790)
#define NODEGRAPH_GRAPHNODEBASE_BUILDOUTPUTVALUEPORT_OFFSET UNITYSDK_OFFSET(0x161434F0)
#define NODEGRAPH_GRAPHNODEBASE_GETPORT_1_OFFSET UNITYSDK_OFFSET(0xD263440)
#define NODEGRAPH_GRAPHNODEBASE_GETPORT_2_OFFSET UNITYSDK_OFFSET(0x16143600)
#define NODEGRAPH_GRAPHNODEBASE_GETPORT_OFFSET UNITYSDK_OFFSET(0xD263360)
#define NODEGRAPH_GRAPHNODEBASE_ONACTIVEPORT_OFFSET UNITYSDK_OFFSET(0x16143990)
#define NODEGRAPH_GRAPHNODEBASE_ONNODEDONE_OFFSET UNITYSDK_OFFSET(0x16143780)
#define NODEGRAPH_GRAPHNODEBASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x16143810)
#define NODEGRAPH_GRAPHNODEBASE_SETPARAM_OFFSET UNITYSDK_OFFSET(0x16143860)
#define NODEGRAPH_GRAPHNODEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xD2632B0)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphNodeBase_TypeDefinitionIndex = 75234;

	class GraphNodeBase : public ::NodeGraph::IGraphNode
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister; // 0x30
		::NodeGraph::GraphInputPort* _in; // 0x38
		::NodeGraph::GraphOutputPort* _out; // 0x40
		::System::Collections::Generic::List_1<::NodeGraph::IGraphPort*>* _outputPortList; // 0x48
		::System::Collections::Generic::List_1<::NodeGraph::IGraphPort*>* _inputPortList; // 0x50

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraph)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEBASE__CTOR_OFFSET))(this, nodeGraph);
		}

		::NodeGraph::IGraphPort* GetPort(::NodeGraph::GraphPortDirection direction, ::System::String* name)
		{
			return ((::NodeGraph::IGraphPort*(*)(::PVOID, ::NodeGraph::GraphPortDirection, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEBASE_GETPORT_OFFSET))(this, direction, name);
		}

		::NodeGraph::IGraphPort* GetPort_1(::NodeGraph::GraphPortDirection direction, ::System::Int32 index)
		{
			return ((::NodeGraph::IGraphPort*(*)(::PVOID, ::NodeGraph::GraphPortDirection, ::System::Int32))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEBASE_GETPORT_1_OFFSET))(this, direction, index);
		}

		::System::Void BuildInputPort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEBASE_BUILDINPUTPORT_OFFSET))(this);
		}

		::NodeGraph::GraphInputPort* BuildExInputPort(::System::String* name)
		{
			return ((::NodeGraph::GraphInputPort*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEBASE_BUILDEXINPUTPORT_OFFSET))(this, name);
		}

		::NodeGraph::GraphInputValuePort* BuildInputValuePort(::System::String* name)
		{
			return ((::NodeGraph::GraphInputValuePort*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEBASE_BUILDINPUTVALUEPORT_OFFSET))(this, name);
		}

		::System::Void BuildOutputPort()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEBASE_BUILDOUTPUTPORT_OFFSET))(this);
		}

		::NodeGraph::GraphOutputPort* BuildExOutputPort(::System::String* name)
		{
			return ((::NodeGraph::GraphOutputPort*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEBASE_BUILDEXOUTPUTPORT_OFFSET))(this, name);
		}

		::NodeGraph::GraphOutputValuePort* BuildOutputValuePort(::System::String* name)
		{
			return ((::NodeGraph::GraphOutputValuePort*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEBASE_BUILDOUTPUTVALUEPORT_OFFSET))(this, name);
		}

		::NodeGraph::IGraphPort* GetPort_2(::System::Collections::Generic::List_1<::NodeGraph::IGraphPort*>* portList, ::System::String* name)
		{
			return ((::NodeGraph::IGraphPort*(*)(::PVOID, ::System::Collections::Generic::List_1<::NodeGraph::IGraphPort*>*, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEBASE_GETPORT_2_OFFSET))(this, portList, name);
		}

		::System::Void OnNodeDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEBASE_ONNODEDONE_OFFSET))(this);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEBASE_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void SetParam(::System::String* key, ::SimpleJSON::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEBASE_SETPARAM_OFFSET))(this, key, value);
		}

		::System::Void OnActivePort(::NodeGraph::GraphInputPort* port)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphInputPort*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHNODEBASE_ONACTIVEPORT_OFFSET))(this, port);
		}
	};
}
