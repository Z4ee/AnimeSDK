#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"
#include "unitysdk/NodeGraph/MainCity/Trigger.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace NodeGraph { class GraphInputValuePort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshPath; }

#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x142B9070)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE_ISMATCHIDLESTANDBYCONDITION_OFFSET UNITYSDK_OFFSET(0x142BA6C0)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x142B7890)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0x142B8A50)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0x142B7E30)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x142B73E0)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x142B83D0)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x142B7350)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE__ONREGISTERPARAM_B__19_0_OFFSET UNITYSDK_OFFSET(0x142BA8A0)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE__ONREGISTERPARAM_B__19_1_OFFSET UNITYSDK_OFFSET(0x142BAC10)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE__ONREGISTERPARAM_B__19_2_OFFSET UNITYSDK_OFFSET(0x142BAC40)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE__ONREGISTERPARAM_B__19_3_OFFSET UNITYSDK_OFFSET(0x142BAC70)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE__ONREGISTERPARAM_B__19_4_OFFSET UNITYSDK_OFFSET(0x142BACA0)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE__ONREGISTERPARAM_B__19_5_OFFSET UNITYSDK_OFFSET(0x142BACD0)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE__ONREGISTERPARAM_B__19_6_OFFSET UNITYSDK_OFFSET(0x142BAD00)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE__ONREGISTERPARAM_B__19_7_OFFSET UNITYSDK_OFFSET(0x142BAD30)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE__ONREGISTERPARAM_B__19_8_OFFSET UNITYSDK_OFFSET(0x142BAD60)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE___BASE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0x142BAD90)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x142BAE20)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE___BASE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0x142BAE30)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE___BASE_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0x142BAE70)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x142BAE80)
#define NODEGRAPH_MAINCITY_CHECKPOINTRANGE___BASE_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x142BAE90)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int CheckPointRange_TypeDefinitionIndex = 54681;

	class CheckPointRange : public ::NodeGraph::MainCity::Trigger
	{
	public:
		::System::String* _centerPosString; // 0x88
		::Il2CppArray<::UnityEngine::Vector3>* navMeshPathCorners; // 0x90
		::MoleMole::Battle::Entity* _effect; // 0x98
		::UnityEngine::AI::NavMeshPath* navpath; // 0xA0
		::System::Collections::Generic::List_1<::System::Int32>* needNpcTags; // 0xA8
		::MoleMole::Battle::Entity* _entity; // 0xB0
		::System::String* centerPos; // 0xB8
		::System::String* bindEffectName; // 0xC0
		::NodeGraph::GraphInputValuePort* _centerPort; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _cachedDataPath; // 0xD0
		::System::Boolean needFix; // 0xD8
		::System::Boolean needLocalAvatar; // 0xD9
		::System::Single range; // 0xDC
		::System::Int32 bindNpcTag; // 0xE0
		::System::Single SaveMaxTime; // 0xE4
		::System::Single SaveMaxTimer; // 0xE8
		::UnityEngine::Vector3 _centerPos; // 0xEC
		::System::Int32 iconType; // 0xF8

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeUpdate(::System::Single deltaTime)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE_ONNODEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE_ONTRIGGER_OFFSET))(this);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE_ONNODECLEAR_OFFSET))(this);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE_CHECKCONDITION_OFFSET))(this);
		}

		::System::Boolean IsMatchIdleStandByCondition(::MoleMole::Battle::Entity* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE_ISMATCHIDLESTANDBYCONDITION_OFFSET))(this, target);
		}

		::System::Void _OnRegisterParam_b__19_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE__ONREGISTERPARAM_B__19_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__19_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE__ONREGISTERPARAM_B__19_1_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__19_2(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE__ONREGISTERPARAM_B__19_2_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__19_3(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE__ONREGISTERPARAM_B__19_3_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__19_4(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE__ONREGISTERPARAM_B__19_4_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__19_5(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE__ONREGISTERPARAM_B__19_5_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__19_6(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE__ONREGISTERPARAM_B__19_6_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__19_7(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE__ONREGISTERPARAM_B__19_7_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__19_8(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE__ONREGISTERPARAM_B__19_8_OFFSET))(this, node);
		}

		::System::Boolean __base_CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE___BASE_CHECKCONDITION_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void __base_OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE___BASE_ONNODECLEAR_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeUpdate(::System::Single P0)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE___BASE_ONNODEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}

		::System::Void __base_OnTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKPOINTRANGE___BASE_ONTRIGGER_OFFSET))(this);
		}
	};
}
