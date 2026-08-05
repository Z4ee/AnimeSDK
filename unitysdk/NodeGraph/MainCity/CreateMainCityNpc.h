#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"
#include "unitysdk/NodeGraph/MainCity/CreateMainCityNpc_SNpcInfo.h"

namespace MoleMole::Battle { class Entity; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_MAINCITY_CREATEMAINCITYNPC_ONENTITYREADYCALLBACK_OFFSET UNITYSDK_OFFSET(0x102CECF0)
#define NODEGRAPH_MAINCITY_CREATEMAINCITYNPC_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x102CE120)
#define NODEGRAPH_MAINCITY_CREATEMAINCITYNPC_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0x102CF7E0)
#define NODEGRAPH_MAINCITY_CREATEMAINCITYNPC_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0x102CE380)
#define NODEGRAPH_MAINCITY_CREATEMAINCITYNPC_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x102CDF70)
#define NODEGRAPH_MAINCITY_CREATEMAINCITYNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x102CDD70)
#define NODEGRAPH_MAINCITY_CREATEMAINCITYNPC__ONREGISTERPARAM_B__7_0_OFFSET UNITYSDK_OFFSET(0x102CFB60)
#define NODEGRAPH_MAINCITY_CREATEMAINCITYNPC__ONREGISTERPARAM_B__7_1_OFFSET UNITYSDK_OFFSET(0x102D0040)
#define NODEGRAPH_MAINCITY_CREATEMAINCITYNPC___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x102D0070)
#define NODEGRAPH_MAINCITY_CREATEMAINCITYNPC___BASE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0x102D0110)
#define NODEGRAPH_MAINCITY_CREATEMAINCITYNPC___BASE_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0x102D01A0)
#define NODEGRAPH_MAINCITY_CREATEMAINCITYNPC___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x102D0240)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int CreateMainCityNpc_TypeDefinitionIndex = 61072;

	class CreateMainCityNpc : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _entity; // 0x58
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _delEntity; // 0x60
		::System::Collections::Generic::List_1<::NodeGraph::MainCity::CreateMainCityNpc_SNpcInfo>* mainCityNpcTagList; // 0x68
		::System::Boolean useSkin; // 0x70
		::System::Boolean _waitFrame; // 0x71

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CREATEMAINCITYNPC__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CREATEMAINCITYNPC_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CREATEMAINCITYNPC_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeUpdate(::System::Single deltaTime)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CREATEMAINCITYNPC_ONNODEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnEntityReadyCallback(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CREATEMAINCITYNPC_ONENTITYREADYCALLBACK_OFFSET))(this, entity);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CREATEMAINCITYNPC_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__7_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CREATEMAINCITYNPC__ONREGISTERPARAM_B__7_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__7_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CREATEMAINCITYNPC__ONREGISTERPARAM_B__7_1_OFFSET))(this, node);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CREATEMAINCITYNPC___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void __base_OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CREATEMAINCITYNPC___BASE_ONNODECLEAR_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeUpdate(::System::Single P0)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CREATEMAINCITYNPC___BASE_ONNODEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CREATEMAINCITYNPC___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
