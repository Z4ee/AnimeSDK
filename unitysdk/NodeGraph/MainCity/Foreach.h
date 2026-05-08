#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"

namespace NodeGraph { class GraphOutputPort; }
namespace NodeGraph { class GraphOutputValuePort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_MAINCITY_FOREACH_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x10930170)
#define NODEGRAPH_MAINCITY_FOREACH_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0x10930DC0)
#define NODEGRAPH_MAINCITY_FOREACH_ONNODEEND_OFFSET UNITYSDK_OFFSET(0x10930E30)
#define NODEGRAPH_MAINCITY_FOREACH_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x1092FF50)
#define NODEGRAPH_MAINCITY_FOREACH__CTOR_OFFSET UNITYSDK_OFFSET(0x1092FE30)
#define NODEGRAPH_MAINCITY_FOREACH__ONREGISTERPARAM_B__12_0_OFFSET UNITYSDK_OFFSET(0x10930EA0)
#define NODEGRAPH_MAINCITY_FOREACH__ONREGISTERPARAM_B__12_1_OFFSET UNITYSDK_OFFSET(0x10931920)
#define NODEGRAPH_MAINCITY_FOREACH__ONREGISTERPARAM_B__12_2_OFFSET UNITYSDK_OFFSET(0x109322C0)
#define NODEGRAPH_MAINCITY_FOREACH___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x10932C70)
#define NODEGRAPH_MAINCITY_FOREACH___BASE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0x10932D10)
#define NODEGRAPH_MAINCITY_FOREACH___BASE_ONNODEEND_OFFSET UNITYSDK_OFFSET(0x10932DA0)
#define NODEGRAPH_MAINCITY_FOREACH___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x10932E30)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int Foreach_TypeDefinitionIndex = 70656;

	class Foreach : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::Collections::Generic::List_1<::NodeGraph::GraphOutputValuePort*>* StringValue; // 0x58
		::NodeGraph::GraphOutputValuePort* IndexValue; // 0x60
		::NodeGraph::GraphOutputValuePort* IsLastValue; // 0x68
		::NodeGraph::GraphOutputPort* onEnd; // 0x70
		::System::Collections::Generic::List_1<::NodeGraph::GraphOutputValuePort*>* FloatValue; // 0x78
		::System::Collections::Generic::List_1<::NodeGraph::GraphOutputValuePort*>* IntValue; // 0x80
		::NodeGraph::GraphOutputPort* onProcess; // 0x88
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>* StringValues; // 0x90
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Single>*>* FloatValues; // 0x98
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* IntValues; // 0xA0
		::System::Int32 _index; // 0xA8

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void OnNodeEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH_ONNODEEND_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__12_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH__ONREGISTERPARAM_B__12_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__12_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH__ONREGISTERPARAM_B__12_1_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__12_2(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH__ONREGISTERPARAM_B__12_2_OFFSET))(this, node);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void __base_OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH___BASE_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void __base_OnNodeEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH___BASE_ONNODEEND_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_FOREACH___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
