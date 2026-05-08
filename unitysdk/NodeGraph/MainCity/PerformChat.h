#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"

class Class_1_D65512A83CF70AB7;
namespace NodeGraph { class GraphOutputValuePort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_MAINCITY_PERFORMCHAT_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0xEC9A2E0)
#define NODEGRAPH_MAINCITY_PERFORMCHAT_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xEC9AC80)
#define NODEGRAPH_MAINCITY_PERFORMCHAT_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0xEC9A830)
#define NODEGRAPH_MAINCITY_PERFORMCHAT_ONPERFORMCALLBACK_OFFSET UNITYSDK_OFFSET(0xEC9A890)
#define NODEGRAPH_MAINCITY_PERFORMCHAT_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xEC99FD0)
#define NODEGRAPH_MAINCITY_PERFORMCHAT__CTOR_OFFSET UNITYSDK_OFFSET(0xEC99E70)
#define NODEGRAPH_MAINCITY_PERFORMCHAT__ONNODEACTIVEWITHSTATE_B__9_0_OFFSET UNITYSDK_OFFSET(0xEC9B3D0)
#define NODEGRAPH_MAINCITY_PERFORMCHAT__ONNODEACTIVEWITHSTATE_B__9_1_OFFSET UNITYSDK_OFFSET(0xEC9B570)
#define NODEGRAPH_MAINCITY_PERFORMCHAT__ONREGISTERPARAM_B__8_0_OFFSET UNITYSDK_OFFSET(0xEC9AF50)
#define NODEGRAPH_MAINCITY_PERFORMCHAT__ONREGISTERPARAM_B__8_1_OFFSET UNITYSDK_OFFSET(0xEC9AF80)
#define NODEGRAPH_MAINCITY_PERFORMCHAT__ONREGISTERPARAM_B__8_2_OFFSET UNITYSDK_OFFSET(0xEC9AFB0)
#define NODEGRAPH_MAINCITY_PERFORMCHAT__ONREGISTERPARAM_B__8_3_OFFSET UNITYSDK_OFFSET(0xEC9B370)
#define NODEGRAPH_MAINCITY_PERFORMCHAT__ONREGISTERPARAM_B__8_4_OFFSET UNITYSDK_OFFSET(0xEC9B3A0)
#define NODEGRAPH_MAINCITY_PERFORMCHAT___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0xEC9B6E0)
#define NODEGRAPH_MAINCITY_PERFORMCHAT___BASE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xEC9B780)
#define NODEGRAPH_MAINCITY_PERFORMCHAT___BASE_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0xEC9B810)
#define NODEGRAPH_MAINCITY_PERFORMCHAT___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xEC9B8B0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int PerformChat_TypeDefinitionIndex = 40089;

	class PerformChat : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::NodeGraph::GraphOutputValuePort* _specialOutput; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* outResultKey; // 0x60
		::System::Int32 targetNpcTag; // 0x68
		::System::Boolean _end; // 0x6C
		::System::Boolean waitTransitionFadeOut; // 0x6D
		::System::Int32 performId; // 0x70
		::System::Single blackFadeInTime; // 0x74

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMCHAT__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMCHAT_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMCHAT_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeUpdate(::System::Single deltaTime)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMCHAT_ONNODEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnPerformCallback(::Class_1_D65512A83CF70AB7* obj)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D65512A83CF70AB7*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMCHAT_ONPERFORMCALLBACK_OFFSET))(this, obj);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMCHAT_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__8_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMCHAT__ONREGISTERPARAM_B__8_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__8_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMCHAT__ONREGISTERPARAM_B__8_1_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__8_2(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMCHAT__ONREGISTERPARAM_B__8_2_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__8_3(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMCHAT__ONREGISTERPARAM_B__8_3_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__8_4(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMCHAT__ONREGISTERPARAM_B__8_4_OFFSET))(this, node);
		}

		::System::Void _OnNodeActiveWithState_b__9_0(::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF reason)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMCHAT__ONNODEACTIVEWITHSTATE_B__9_0_OFFSET))(this, reason);
		}

		::System::Void _OnNodeActiveWithState_b__9_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMCHAT__ONNODEACTIVEWITHSTATE_B__9_1_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMCHAT___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void __base_OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMCHAT___BASE_ONNODECLEAR_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeUpdate(::System::Single P0)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMCHAT___BASE_ONNODEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMCHAT___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
