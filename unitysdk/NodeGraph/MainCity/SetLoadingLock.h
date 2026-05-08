#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"

namespace NodeGraph { class GraphInputValuePort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_SETLOADINGLOCK_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x11D9BD50)
#define NODEGRAPH_MAINCITY_SETLOADINGLOCK_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0x11D9BDA0)
#define NODEGRAPH_MAINCITY_SETLOADINGLOCK_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x11D9BB30)
#define NODEGRAPH_MAINCITY_SETLOADINGLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x11D9ADD0)
#define NODEGRAPH_MAINCITY_SETLOADINGLOCK__ONREGISTERPARAM_B__7_0_OFFSET UNITYSDK_OFFSET(0x11D9BED0)
#define NODEGRAPH_MAINCITY_SETLOADINGLOCK__ONREGISTERPARAM_B__7_1_OFFSET UNITYSDK_OFFSET(0x11D9BF00)
#define NODEGRAPH_MAINCITY_SETLOADINGLOCK__ONREGISTERPARAM_B__7_2_OFFSET UNITYSDK_OFFSET(0x11D9BF50)
#define NODEGRAPH_MAINCITY_SETLOADINGLOCK___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x11D9BFA0)
#define NODEGRAPH_MAINCITY_SETLOADINGLOCK___BASE_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0x11D9C040)
#define NODEGRAPH_MAINCITY_SETLOADINGLOCK___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x11D9C0E0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int SetLoadingLock_TypeDefinitionIndex = 40406;

	class SetLoadingLock : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::NodeGraph::GraphInputValuePort* addidInput; // 0x58
		::System::Boolean isLock; // 0x60
		::System::Boolean processed; // 0x61
		::System::Int32 idValue; // 0x64
		::System::Int32 id; // 0x68
		::System::Int32 addid; // 0x6C

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETLOADINGLOCK__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETLOADINGLOCK_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETLOADINGLOCK_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeUpdate(::System::Single deltaTime)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETLOADINGLOCK_ONNODEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void _OnRegisterParam_b__7_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETLOADINGLOCK__ONREGISTERPARAM_B__7_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__7_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETLOADINGLOCK__ONREGISTERPARAM_B__7_1_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__7_2(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETLOADINGLOCK__ONREGISTERPARAM_B__7_2_OFFSET))(this, node);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETLOADINGLOCK___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeUpdate(::System::Single P0)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETLOADINGLOCK___BASE_ONNODEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETLOADINGLOCK___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
