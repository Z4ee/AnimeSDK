#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class GraphInputValuePort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_ADDTRACKQUEST_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xE588A60)
#define NODEGRAPH_MAINCITY_ADDTRACKQUEST_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xE588750)
#define NODEGRAPH_MAINCITY_ADDTRACKQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0xE5885F0)
#define NODEGRAPH_MAINCITY_ADDTRACKQUEST__ONREGISTERPARAM_B__7_0_OFFSET UNITYSDK_OFFSET(0xE589250)
#define NODEGRAPH_MAINCITY_ADDTRACKQUEST__ONREGISTERPARAM_B__7_1_OFFSET UNITYSDK_OFFSET(0xE589280)
#define NODEGRAPH_MAINCITY_ADDTRACKQUEST__ONREGISTERPARAM_B__7_2_OFFSET UNITYSDK_OFFSET(0xE5892B0)
#define NODEGRAPH_MAINCITY_ADDTRACKQUEST__ONREGISTERPARAM_B__7_3_OFFSET UNITYSDK_OFFSET(0xE5892E0)
#define NODEGRAPH_MAINCITY_ADDTRACKQUEST__ONREGISTERPARAM_B__7_4_OFFSET UNITYSDK_OFFSET(0xE589310)
#define NODEGRAPH_MAINCITY_ADDTRACKQUEST___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xE589340)
#define NODEGRAPH_MAINCITY_ADDTRACKQUEST___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xE589350)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int AddTrackQuest_TypeDefinitionIndex = 87518;

	class AddTrackQuest : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::NodeGraph::GraphInputValuePort* transformPort; // 0x58
		::System::String* Transform; // 0x60
		::System::Int32 npcTag; // 0x68
		::System::Boolean setIk; // 0x6C
		::System::Boolean active; // 0x6D
		::System::Int32 iconType; // 0x70

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDTRACKQUEST__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDTRACKQUEST_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDTRACKQUEST_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__7_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDTRACKQUEST__ONREGISTERPARAM_B__7_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__7_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDTRACKQUEST__ONREGISTERPARAM_B__7_1_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__7_2(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDTRACKQUEST__ONREGISTERPARAM_B__7_2_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__7_3(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDTRACKQUEST__ONREGISTERPARAM_B__7_3_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__7_4(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDTRACKQUEST__ONREGISTERPARAM_B__7_4_OFFSET))(this, node);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDTRACKQUEST___BASE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDTRACKQUEST___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
