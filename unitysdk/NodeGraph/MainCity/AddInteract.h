#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"

class Class_1_7B8672D4F89E3D96;
namespace MoleMole { class FeaturePoint; }
namespace MoleMole { class MonoFeaturePoint; }
namespace MoleMole::Battle { class Entity; }
namespace NodeGraph { class GraphOutputPort; }
namespace NodeGraph { class NodeGraphBase; }
namespace NodeGraph::MainCity { class InteractiveNavigateContainer; }
namespace SimpleJSON { class JSONNode; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define NODEGRAPH_MAINCITY_ADDINTERACT_ACTIVEINTERACT_OFFSET UNITYSDK_OFFSET(0xF61C370)
#define NODEGRAPH_MAINCITY_ADDINTERACT_CHECKFEATUREPOINT_OFFSET UNITYSDK_OFFSET(0xF61CD30)
#define NODEGRAPH_MAINCITY_ADDINTERACT_CLEARINTERACT_OFFSET UNITYSDK_OFFSET(0xF61D1C0)
#define NODEGRAPH_MAINCITY_ADDINTERACT_CREATEINTERACTTRIGGER_OFFSET UNITYSDK_OFFSET(0xF61B810)
#define NODEGRAPH_MAINCITY_ADDINTERACT_GETUID_OFFSET UNITYSDK_OFFSET(0xF61C750)
#define NODEGRAPH_MAINCITY_ADDINTERACT_MATCHPARENT_OFFSET UNITYSDK_OFFSET(0xF61BBF0)
#define NODEGRAPH_MAINCITY_ADDINTERACT_ONINTERACT_1_OFFSET UNITYSDK_OFFSET(0xF61E0E0)
#define NODEGRAPH_MAINCITY_ADDINTERACT_ONINTERACT_OFFSET UNITYSDK_OFFSET(0xF61DCC0)
#define NODEGRAPH_MAINCITY_ADDINTERACT_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0xF61D350)
#define NODEGRAPH_MAINCITY_ADDINTERACT_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xF61E250)
#define NODEGRAPH_MAINCITY_ADDINTERACT_ONNODEDONE_OFFSET UNITYSDK_OFFSET(0xF61E420)
#define NODEGRAPH_MAINCITY_ADDINTERACT_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0xF61CB50)
#define NODEGRAPH_MAINCITY_ADDINTERACT_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xF61B660)
#define NODEGRAPH_MAINCITY_ADDINTERACT_ONREMOVEINTERACTHANDLE_OFFSET UNITYSDK_OFFSET(0xF61DEB0)
#define NODEGRAPH_MAINCITY_ADDINTERACT_ONTRIGGERENTERCALLBACK_OFFSET UNITYSDK_OFFSET(0xF61B9A0)
#define NODEGRAPH_MAINCITY_ADDINTERACT_ONTRIGGEREXITCALLBACK_OFFSET UNITYSDK_OFFSET(0xF61C120)
#define NODEGRAPH_MAINCITY_ADDINTERACT_UNACTIVEINTERACT_OFFSET UNITYSDK_OFFSET(0xF61C9C0)
#define NODEGRAPH_MAINCITY_ADDINTERACT__ACTIVEINTERACT_B__15_0_OFFSET UNITYSDK_OFFSET(0xF61E630)
#define NODEGRAPH_MAINCITY_ADDINTERACT__CREATEINTERACTTRIGGER_B__11_0_OFFSET UNITYSDK_OFFSET(0xF61E610)
#define NODEGRAPH_MAINCITY_ADDINTERACT__CREATEINTERACTTRIGGER_B__11_1_OFFSET UNITYSDK_OFFSET(0xF61E620)
#define NODEGRAPH_MAINCITY_ADDINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0xF61B4E0)
#define NODEGRAPH_MAINCITY_ADDINTERACT__ONREGISTERPARAM_B__10_0_OFFSET UNITYSDK_OFFSET(0xF61E5B0)
#define NODEGRAPH_MAINCITY_ADDINTERACT__ONREGISTERPARAM_B__10_1_OFFSET UNITYSDK_OFFSET(0xF61E5E0)
#define NODEGRAPH_MAINCITY_ADDINTERACT___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0xF61E640)
#define NODEGRAPH_MAINCITY_ADDINTERACT___BASE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xF61E6E0)
#define NODEGRAPH_MAINCITY_ADDINTERACT___BASE_ONNODEDONE_OFFSET UNITYSDK_OFFSET(0xF61E770)
#define NODEGRAPH_MAINCITY_ADDINTERACT___BASE_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0xF61E780)
#define NODEGRAPH_MAINCITY_ADDINTERACT___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xF61E820)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int AddInteract_TypeDefinitionIndex = 63676;

	class AddInteract : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::MoleMole::FeaturePoint* _currentPoint; // 0x58
		::NodeGraph::MainCity::InteractiveNavigateContainer* _interactiveNavigateContainer; // 0x60
		::MoleMole::MonoFeaturePoint* _featurePoints; // 0x68
		::NodeGraph::GraphOutputPort* _onInteract; // 0x70
		::MoleMole::Battle::Entity* _triggerEntity; // 0x78
		::System::Int32 interactId; // 0x80
		::System::Int32 targetNpcTag; // 0x84
		::System::Boolean _addedInteract; // 0x88
		::System::Boolean _inTrigger; // 0x89

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void CreateInteractTrigger(::MoleMole::Battle::Entity* entity, ::Class_1_7B8672D4F89E3D96* interactConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_7B8672D4F89E3D96*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT_CREATEINTERACTTRIGGER_OFFSET))(this, entity, interactConfig);
		}

		::System::Void OnTriggerEnterCallback(::UnityEngine::Collider* col)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT_ONTRIGGERENTERCALLBACK_OFFSET))(this, col);
		}

		::System::Void OnTriggerExitCallback(::UnityEngine::Collider* col)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT_ONTRIGGEREXITCALLBACK_OFFSET))(this, col);
		}

		static ::System::Boolean MatchParent(::UnityEngine::Transform* child, ::UnityEngine::Transform* parent)
		{
			return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT_MATCHPARENT_OFFSET))(child, parent);
		}

		::System::Void ActiveInteract()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT_ACTIVEINTERACT_OFFSET))(this);
		}

		::System::Void UnactiveInteract()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT_UNACTIVEINTERACT_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeUpdate(::System::Single deltaTime)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT_ONNODEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void ClearInteract()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT_CLEARINTERACT_OFFSET))(this);
		}

		::System::Boolean CheckFeaturePoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT_CHECKFEATUREPOINT_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void OnInteract(::System::Int32 _interactId, ::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT_ONINTERACT_OFFSET))(this, _interactId, entity);
		}

		::System::Void OnRemoveInteractHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT_ONREMOVEINTERACTHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnInteract_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT_ONINTERACT_1_OFFSET))(this);
		}

		::System::UInt64 GetUid()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT_GETUID_OFFSET))(this);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void OnNodeDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT_ONNODEDONE_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__10_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT__ONREGISTERPARAM_B__10_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__10_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT__ONREGISTERPARAM_B__10_1_OFFSET))(this, node);
		}

		::System::Void _CreateInteractTrigger_b__11_0(::UnityEngine::Collider* collider, ::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT__CREATEINTERACTTRIGGER_B__11_0_OFFSET))(this, collider, o);
		}

		::System::Void _CreateInteractTrigger_b__11_1(::UnityEngine::Collider* collider, ::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT__CREATEINTERACTTRIGGER_B__11_1_OFFSET))(this, collider, o);
		}

		::System::Void _ActiveInteract_b__15_0(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT__ACTIVEINTERACT_B__15_0_OFFSET))(this, _);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void __base_OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT___BASE_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void __base_OnNodeDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT___BASE_ONNODEDONE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeUpdate(::System::Single P0)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT___BASE_ONNODEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDINTERACT___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
