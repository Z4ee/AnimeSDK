#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"

namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_SETAIACTIVE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0xFC238C0)
#define NODEGRAPH_MAINCITY_SETAIACTIVE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xFC23CC0)
#define NODEGRAPH_MAINCITY_SETAIACTIVE_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0xFC23AB0)
#define NODEGRAPH_MAINCITY_SETAIACTIVE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xFC23710)
#define NODEGRAPH_MAINCITY_SETAIACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0xFC23560)
#define NODEGRAPH_MAINCITY_SETAIACTIVE__ONREGISTERPARAM_B__3_0_OFFSET UNITYSDK_OFFSET(0xFC23F30)
#define NODEGRAPH_MAINCITY_SETAIACTIVE__ONREGISTERPARAM_B__3_1_OFFSET UNITYSDK_OFFSET(0xFC23F60)
#define NODEGRAPH_MAINCITY_SETAIACTIVE___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0xFC23F90)
#define NODEGRAPH_MAINCITY_SETAIACTIVE___BASE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xFC24030)
#define NODEGRAPH_MAINCITY_SETAIACTIVE___BASE_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0xFC240C0)
#define NODEGRAPH_MAINCITY_SETAIACTIVE___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xFC24160)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int SetAIActive_TypeDefinitionIndex = 77654;

	class SetAIActive : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::Boolean active; // 0x58
		::System::Int32 mainCityNpcTag; // 0x5C

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETAIACTIVE__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETAIACTIVE_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETAIACTIVE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeUpdate(::System::Single deltaTime)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETAIACTIVE_ONNODEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETAIACTIVE_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__3_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETAIACTIVE__ONREGISTERPARAM_B__3_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__3_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETAIACTIVE__ONREGISTERPARAM_B__3_1_OFFSET))(this, node);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETAIACTIVE___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void __base_OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETAIACTIVE___BASE_ONNODECLEAR_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeUpdate(::System::Single P0)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETAIACTIVE___BASE_ONNODEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETAIACTIVE___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
