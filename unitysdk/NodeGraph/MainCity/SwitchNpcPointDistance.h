#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class GraphInputValuePort; }
namespace NodeGraph { class GraphOutputPort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_SWITCHNPCPOINTDISTANCE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xD457410)
#define NODEGRAPH_MAINCITY_SWITCHNPCPOINTDISTANCE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xD4571F0)
#define NODEGRAPH_MAINCITY_SWITCHNPCPOINTDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xD457120)
#define NODEGRAPH_MAINCITY_SWITCHNPCPOINTDISTANCE__ONREGISTERPARAM_B__7_0_OFFSET UNITYSDK_OFFSET(0xD457720)
#define NODEGRAPH_MAINCITY_SWITCHNPCPOINTDISTANCE__ONREGISTERPARAM_B__7_1_OFFSET UNITYSDK_OFFSET(0xD457750)
#define NODEGRAPH_MAINCITY_SWITCHNPCPOINTDISTANCE__ONREGISTERPARAM_B__7_2_OFFSET UNITYSDK_OFFSET(0xD457780)
#define NODEGRAPH_MAINCITY_SWITCHNPCPOINTDISTANCE___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xD457900)
#define NODEGRAPH_MAINCITY_SWITCHNPCPOINTDISTANCE___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xD457910)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int SwitchNpcPointDistance_TypeDefinitionIndex = 68075;

	class SwitchNpcPointDistance : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::String* centerPos; // 0x58
		::NodeGraph::GraphInputValuePort* _centerPort; // 0x60
		::NodeGraph::GraphOutputPort* False; // 0x68
		::NodeGraph::GraphOutputPort* True; // 0x70
		::System::Single distance; // 0x78
		::System::Int32 npcTag; // 0x7C

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHNPCPOINTDISTANCE__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHNPCPOINTDISTANCE_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHNPCPOINTDISTANCE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__7_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHNPCPOINTDISTANCE__ONREGISTERPARAM_B__7_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__7_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHNPCPOINTDISTANCE__ONREGISTERPARAM_B__7_1_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__7_2(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHNPCPOINTDISTANCE__ONREGISTERPARAM_B__7_2_OFFSET))(this, node);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHNPCPOINTDISTANCE___BASE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHNPCPOINTDISTANCE___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
