#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeBase.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"

namespace MoleMole::Battle { class Entity; }
namespace NodeGraph { class GraphInputValuePort; }
namespace NodeGraph { class GraphOutputPort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_WAITSECONDS_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0xBDFCF50)
#define NODEGRAPH_MAINCITY_WAITSECONDS_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0xBDFCFA0)
#define NODEGRAPH_MAINCITY_WAITSECONDS_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xBDFCDA0)
#define NODEGRAPH_MAINCITY_WAITSECONDS__CTOR_OFFSET UNITYSDK_OFFSET(0xBDFCCD0)
#define NODEGRAPH_MAINCITY_WAITSECONDS__ONREGISTERPARAM_B__7_0_OFFSET UNITYSDK_OFFSET(0xBDFD1B0)
#define NODEGRAPH_MAINCITY_WAITSECONDS__ONREGISTERPARAM_B__7_1_OFFSET UNITYSDK_OFFSET(0xBDFD1E0)
#define NODEGRAPH_MAINCITY_WAITSECONDS___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0xBDFD210)
#define NODEGRAPH_MAINCITY_WAITSECONDS___BASE_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0xBDFD2B0)
#define NODEGRAPH_MAINCITY_WAITSECONDS___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xBDFD350)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int WaitSeconds_TypeDefinitionIndex = 74813;

	class WaitSeconds : public ::NodeGraph::GraphNodeBase
	{
	public:
		::MoleMole::Battle::Entity* _entity; // 0x58
		::NodeGraph::GraphOutputPort* onTime; // 0x60
		::NodeGraph::GraphInputValuePort* secondsInput; // 0x68
		::System::Single _timer; // 0x70
		::System::Single seconds; // 0x74
		::System::Int32 npcDummyTag; // 0x78

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraph)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITSECONDS__CTOR_OFFSET))(this, nodeGraph);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITSECONDS_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITSECONDS_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeUpdate(::System::Single deltaTime)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITSECONDS_ONNODEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void _OnRegisterParam_b__7_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITSECONDS__ONREGISTERPARAM_B__7_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__7_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITSECONDS__ONREGISTERPARAM_B__7_1_OFFSET))(this, node);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITSECONDS___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeUpdate(::System::Single P0)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITSECONDS___BASE_ONNODEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITSECONDS___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
