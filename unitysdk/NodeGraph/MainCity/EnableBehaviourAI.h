#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"

namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI_ONACTIVATECAMERAMODE_OFFSET UNITYSDK_OFFSET(0x11B36780)
#define NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI_ONDEACTIVATECAMERAMODE_OFFSET UNITYSDK_OFFSET(0x11B363C0)
#define NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x11B35330)
#define NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0x11B36110)
#define NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI_ONNODEEND_OFFSET UNITYSDK_OFFSET(0x11B35E60)
#define NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0x11B35BC0)
#define NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x11B35110)
#define NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI__CTOR_OFFSET UNITYSDK_OFFSET(0x11B34F60)
#define NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI__ONREGISTERPARAM_B__5_0_OFFSET UNITYSDK_OFFSET(0x11B36B20)
#define NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI__ONREGISTERPARAM_B__5_1_OFFSET UNITYSDK_OFFSET(0x11B36B50)
#define NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI__ONREGISTERPARAM_B__5_2_OFFSET UNITYSDK_OFFSET(0x11B36B80)
#define NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x11B36BB0)
#define NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI___BASE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0x11B36C50)
#define NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI___BASE_ONNODEEND_OFFSET UNITYSDK_OFFSET(0x11B36CE0)
#define NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI___BASE_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0x11B36D70)
#define NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x11B36E10)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int EnableBehaviourAI_TypeDefinitionIndex = 50581;

	class EnableBehaviourAI : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::String* lastBgmSpecialState; // 0x58
		::System::String* bgmState; // 0x60
		::System::Boolean MuteBGM; // 0x68
		::System::Int32 mainCityNpcTag; // 0x6C

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeUpdate(::System::Single deltaTime)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI_ONNODEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnNodeEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI_ONNODEEND_OFFSET))(this);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void OnDeActivateCameraMode(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI_ONDEACTIVATECAMERAMODE_OFFSET))(this, obj);
		}

		::System::Void OnActivateCameraMode(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI_ONACTIVATECAMERAMODE_OFFSET))(this, obj);
		}

		::System::Void _OnRegisterParam_b__5_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI__ONREGISTERPARAM_B__5_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__5_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI__ONREGISTERPARAM_B__5_1_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__5_2(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI__ONREGISTERPARAM_B__5_2_OFFSET))(this, node);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void __base_OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI___BASE_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void __base_OnNodeEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI___BASE_ONNODEEND_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeUpdate(::System::Single P0)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI___BASE_ONNODEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ENABLEBEHAVIOURAI___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
