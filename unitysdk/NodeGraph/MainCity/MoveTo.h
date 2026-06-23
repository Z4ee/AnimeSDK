#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace NodeGraph { class GraphInputValuePort; }
namespace NodeGraph { class GraphOutputPort; }
namespace NodeGraph { class NodeGraphBase; }
namespace NodeGraph::MainCity { class NavigateContainer; }
namespace NodeGraph::MainCity { class SimpleInteractionPoint; }
namespace SimpleJSON { class JSONNode; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_MAINCITY_MOVETO_GETTARGETFORWARD_OFFSET UNITYSDK_OFFSET(0xD452600)
#define NODEGRAPH_MAINCITY_MOVETO_GETTARGETPOS_OFFSET UNITYSDK_OFFSET(0xD452430)
#define NODEGRAPH_MAINCITY_MOVETO_HANDLEPLAYERNAVIGATEDONEACTION_CLEAR_OFFSET UNITYSDK_OFFSET(0xD455A90)
#define NODEGRAPH_MAINCITY_MOVETO_HANDLEPLAYERNAVIGATEDONEACTION_OFFSET UNITYSDK_OFFSET(0xD4553F0)
#define NODEGRAPH_MAINCITY_MOVETO_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0xD452E10)
#define NODEGRAPH_MAINCITY_MOVETO_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xD456230)
#define NODEGRAPH_MAINCITY_MOVETO_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0xD454400)
#define NODEGRAPH_MAINCITY_MOVETO_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xD4529B0)
#define NODEGRAPH_MAINCITY_MOVETO_ONSTOPMOVEHANDLE_OFFSET UNITYSDK_OFFSET(0xD455570)
#define NODEGRAPH_MAINCITY_MOVETO_STARTNEWMOVETO_OFFSET UNITYSDK_OFFSET(0xD453750)
#define NODEGRAPH_MAINCITY_MOVETO__CTOR_OFFSET UNITYSDK_OFFSET(0xD452180)
#define NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_0_OFFSET UNITYSDK_OFFSET(0xD456500)
#define NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_1_OFFSET UNITYSDK_OFFSET(0xD456530)
#define NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_2_OFFSET UNITYSDK_OFFSET(0xD456AA0)
#define NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_3_OFFSET UNITYSDK_OFFSET(0xD456AD0)
#define NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_4_OFFSET UNITYSDK_OFFSET(0xD456B00)
#define NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_5_OFFSET UNITYSDK_OFFSET(0xD456B30)
#define NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_6_OFFSET UNITYSDK_OFFSET(0xD456B60)
#define NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_7_OFFSET UNITYSDK_OFFSET(0xD456B90)
#define NODEGRAPH_MAINCITY_MOVETO___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0xD456BC0)
#define NODEGRAPH_MAINCITY_MOVETO___BASE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xD456C60)
#define NODEGRAPH_MAINCITY_MOVETO___BASE_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0xD456CF0)
#define NODEGRAPH_MAINCITY_MOVETO___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xD456D90)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int MoveTo_TypeDefinitionIndex = 74286;

	class MoveTo : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::NodeGraph::MainCity::NavigateContainer* _navigateContainer; // 0x58
		::NodeGraph::GraphInputValuePort* TargetPosInput; // 0x60
		::NodeGraph::GraphOutputPort* _onMoveEnd; // 0x68
		::NodeGraph::GraphInputValuePort* MaxWaitIdleTimeInput; // 0x70
		::NodeGraph::MainCity::SimpleInteractionPoint* _targetPoint; // 0x78
		::System::Collections::Generic::List_1<::System::String*>* _path; // 0x80
		::NodeGraph::GraphInputValuePort* _hasTurnAniPort; // 0x88
		::System::Single MaxWaitIdleTime; // 0x90
		::System::Int32 _currentIndex; // 0x94
		::System::Single CheckStandTime; // 0x98
		::System::Single maxAngle; // 0x9C
		::System::Single MaxTime; // 0xA0
		::System::Int32 targetNpcTag; // 0xA4
		::System::Boolean _noTurnAnim; // 0xA8
		::System::Boolean needDetour; // 0xA9
		::System::Boolean _teleporting; // 0xAA
		::System::Boolean moveLocalAvatar; // 0xAB
		::System::Single _timer; // 0xAC
		::System::Boolean _processed; // 0xB0
		::System::Boolean _oldWalking; // 0xB1
		::System::Boolean accurate; // 0xB2
		::System::Boolean _waitFrame; // 0xB3
		::System::Boolean useNavMesh; // 0xB4
		::System::Single minAngle; // 0xB8
		::System::Single range; // 0xBC

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::UnityEngine::Vector3 GetTargetPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO_GETTARGETPOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTargetForward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO_GETTARGETFORWARD_OFFSET))(this);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState StartNewMoveTo()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO_STARTNEWMOVETO_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeUpdate(::System::Single deltaTime)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO_ONNODEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnStopMoveHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO_ONSTOPMOVEHANDLE_OFFSET))(this, obj);
		}

		::System::Void HandlePlayerNavigateDoneAction_Clear(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO_HANDLEPLAYERNAVIGATEDONEACTION_CLEAR_OFFSET))(this, entity);
		}

		::System::Void HandlePlayerNavigateDoneAction(::MoleMole::Battle::Entity* entity, ::System::Boolean overtime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO_HANDLEPLAYERNAVIGATEDONEACTION_OFFSET))(this, entity, overtime);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__28_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_1_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_2(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_2_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_3(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_3_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_4(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_4_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_5(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_5_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_6(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_6_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__28_7(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO__ONREGISTERPARAM_B__28_7_OFFSET))(this, node);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void __base_OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO___BASE_ONNODECLEAR_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeUpdate(::System::Single P0)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO___BASE_ONNODEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MOVETO___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
