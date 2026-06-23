#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class GraphInputValuePort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_MAINCITY_SHOWBUBBLE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x11F8ECC0)
#define NODEGRAPH_MAINCITY_SHOWBUBBLE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x11F8EA30)
#define NODEGRAPH_MAINCITY_SHOWBUBBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x11F8E8C0)
#define NODEGRAPH_MAINCITY_SHOWBUBBLE__ONREGISTERPARAM_B__7_0_OFFSET UNITYSDK_OFFSET(0x11F8F780)
#define NODEGRAPH_MAINCITY_SHOWBUBBLE__ONREGISTERPARAM_B__7_1_OFFSET UNITYSDK_OFFSET(0x11F8F7B0)
#define NODEGRAPH_MAINCITY_SHOWBUBBLE__ONREGISTERPARAM_B__7_2_OFFSET UNITYSDK_OFFSET(0x11F8FC40)
#define NODEGRAPH_MAINCITY_SHOWBUBBLE__ONREGISTERPARAM_B__7_3_OFFSET UNITYSDK_OFFSET(0x11F8FC70)
#define NODEGRAPH_MAINCITY_SHOWBUBBLE___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x11F8FCA0)
#define NODEGRAPH_MAINCITY_SHOWBUBBLE___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x11F8FCB0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int ShowBubble_TypeDefinitionIndex = 79185;

	class ShowBubble : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* overridenpcTag; // 0x58
		::NodeGraph::GraphInputValuePort* _bubbleInput; // 0x60
		::NodeGraph::GraphInputValuePort* _npcTagInput; // 0x68
		::System::Int32 bubbleId; // 0x70
		::System::Boolean waitLoading; // 0x74
		::System::Int32 npcTag; // 0x78

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWBUBBLE__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWBUBBLE_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWBUBBLE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__7_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWBUBBLE__ONREGISTERPARAM_B__7_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__7_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWBUBBLE__ONREGISTERPARAM_B__7_1_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__7_2(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWBUBBLE__ONREGISTERPARAM_B__7_2_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__7_3(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWBUBBLE__ONREGISTERPARAM_B__7_3_OFFSET))(this, node);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWBUBBLE___BASE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWBUBBLE___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
