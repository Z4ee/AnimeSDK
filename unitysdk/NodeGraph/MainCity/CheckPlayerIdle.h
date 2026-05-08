#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"
#include "unitysdk/NodeGraph/MainCity/Trigger.h"

namespace MoleMole::Battle { class Entity; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_CHECKPLAYERIDLE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x11B345A0)
#define NODEGRAPH_MAINCITY_CHECKPLAYERIDLE_ISMATCHIDLESTANDBYCONDITION_OFFSET UNITYSDK_OFFSET(0x11B34CA0)
#define NODEGRAPH_MAINCITY_CHECKPLAYERIDLE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x11B34470)
#define NODEGRAPH_MAINCITY_CHECKPLAYERIDLE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x11B34370)
#define NODEGRAPH_MAINCITY_CHECKPLAYERIDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x11B34360)
#define NODEGRAPH_MAINCITY_CHECKPLAYERIDLE__ONREGISTERPARAM_B__3_0_OFFSET UNITYSDK_OFFSET(0x11B34E80)
#define NODEGRAPH_MAINCITY_CHECKPLAYERIDLE___BASE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x11B34EB0)
#define NODEGRAPH_MAINCITY_CHECKPLAYERIDLE___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x11B34F40)
#define NODEGRAPH_MAINCITY_CHECKPLAYERIDLE___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x11B34F50)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int CheckPlayerIdle_TypeDefinitionIndex = 46365;

	class CheckPlayerIdle : public ::NodeGraph::MainCity::Trigger
	{
	public:
		::MoleMole::Battle::Entity* _checkNpc; // 0x88
		::System::Int32 checkNpcTag; // 0x90

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERIDLE__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERIDLE_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERIDLE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERIDLE_CHECKCONDITION_OFFSET))(this);
		}

		::System::Boolean IsMatchIdleStandByCondition(::MoleMole::Battle::Entity* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERIDLE_ISMATCHIDLESTANDBYCONDITION_OFFSET))(this, target);
		}

		::System::Void _OnRegisterParam_b__3_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERIDLE__ONREGISTERPARAM_B__3_0_OFFSET))(this, node);
		}

		::System::Boolean __base_CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERIDLE___BASE_CHECKCONDITION_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERIDLE___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPLAYERIDLE___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
