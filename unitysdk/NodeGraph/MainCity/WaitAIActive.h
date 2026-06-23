#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"

namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_WAITAIACTIVE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x10720D60)
#define NODEGRAPH_MAINCITY_WAITAIACTIVE_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0x10720FC0)
#define NODEGRAPH_MAINCITY_WAITAIACTIVE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x10720C30)
#define NODEGRAPH_MAINCITY_WAITAIACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x10720A80)
#define NODEGRAPH_MAINCITY_WAITAIACTIVE__ONREGISTERPARAM_B__2_0_OFFSET UNITYSDK_OFFSET(0x10721230)
#define NODEGRAPH_MAINCITY_WAITAIACTIVE___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x10721260)
#define NODEGRAPH_MAINCITY_WAITAIACTIVE___BASE_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0x107212B0)
#define NODEGRAPH_MAINCITY_WAITAIACTIVE___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x10721310)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int WaitAIActive_TypeDefinitionIndex = 60074;

	class WaitAIActive : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::Int32 npcTag; // 0x58

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITAIACTIVE__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITAIACTIVE_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITAIACTIVE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeUpdate(::System::Single deltaTime)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITAIACTIVE_ONNODEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void _OnRegisterParam_b__2_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITAIACTIVE__ONREGISTERPARAM_B__2_0_OFFSET))(this, node);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITAIACTIVE___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeUpdate(::System::Single P0)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITAIACTIVE___BASE_ONNODEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITAIACTIVE___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
