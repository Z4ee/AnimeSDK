#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"

namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_SETPOSITION_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0xFC245C0)
#define NODEGRAPH_MAINCITY_SETPOSITION_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0xFC24EC0)
#define NODEGRAPH_MAINCITY_SETPOSITION_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xFC243A0)
#define NODEGRAPH_MAINCITY_SETPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0xFC241F0)
#define NODEGRAPH_MAINCITY_SETPOSITION__ONREGISTERPARAM_B__5_0_OFFSET UNITYSDK_OFFSET(0xFC24FD0)
#define NODEGRAPH_MAINCITY_SETPOSITION__ONREGISTERPARAM_B__5_1_OFFSET UNITYSDK_OFFSET(0xFC25000)
#define NODEGRAPH_MAINCITY_SETPOSITION__ONREGISTERPARAM_B__5_2_OFFSET UNITYSDK_OFFSET(0xFC25030)
#define NODEGRAPH_MAINCITY_SETPOSITION___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0xFC25060)
#define NODEGRAPH_MAINCITY_SETPOSITION___BASE_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0xFC25100)
#define NODEGRAPH_MAINCITY_SETPOSITION___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xFC251A0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int SetPosition_TypeDefinitionIndex = 51355;

	class SetPosition : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::String* npcTransform; // 0x58
		::System::Int32 npcTag; // 0x60
		::System::Boolean waitFrame; // 0x64
		::System::Boolean isLocalAvatar; // 0x65

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETPOSITION__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETPOSITION_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETPOSITION_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeUpdate(::System::Single deltaTime)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETPOSITION_ONNODEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void _OnRegisterParam_b__5_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETPOSITION__ONREGISTERPARAM_B__5_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__5_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETPOSITION__ONREGISTERPARAM_B__5_1_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__5_2(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETPOSITION__ONREGISTERPARAM_B__5_2_OFFSET))(this, node);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETPOSITION___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeUpdate(::System::Single P0)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETPOSITION___BASE_ONNODEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETPOSITION___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
