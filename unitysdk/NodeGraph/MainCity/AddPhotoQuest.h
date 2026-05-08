#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"

namespace NodeGraph { class GraphOutputPort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_ADDPHOTOQUEST_ONCLICKPHOTOCLOSE_OFFSET UNITYSDK_OFFSET(0xF07BD30)
#define NODEGRAPH_MAINCITY_ADDPHOTOQUEST_ONFINISHHANDLE_OFFSET UNITYSDK_OFFSET(0xF07B330)
#define NODEGRAPH_MAINCITY_ADDPHOTOQUEST_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0xF07AE80)
#define NODEGRAPH_MAINCITY_ADDPHOTOQUEST_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xF07B830)
#define NODEGRAPH_MAINCITY_ADDPHOTOQUEST_ONNODEDONE_OFFSET UNITYSDK_OFFSET(0xF07BAD0)
#define NODEGRAPH_MAINCITY_ADDPHOTOQUEST_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xF07ABF0)
#define NODEGRAPH_MAINCITY_ADDPHOTOQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0xF07AB10)
#define NODEGRAPH_MAINCITY_ADDPHOTOQUEST__ONCLICKPHOTOCLOSE_B__12_0_OFFSET UNITYSDK_OFFSET(0xF07C060)
#define NODEGRAPH_MAINCITY_ADDPHOTOQUEST__ONCLICKPHOTOCLOSE_B__12_1_OFFSET UNITYSDK_OFFSET(0xF07C520)
#define NODEGRAPH_MAINCITY_ADDPHOTOQUEST__ONREGISTERPARAM_B__7_0_OFFSET UNITYSDK_OFFSET(0xF07BFA0)
#define NODEGRAPH_MAINCITY_ADDPHOTOQUEST__ONREGISTERPARAM_B__7_1_OFFSET UNITYSDK_OFFSET(0xF07BFD0)
#define NODEGRAPH_MAINCITY_ADDPHOTOQUEST__ONREGISTERPARAM_B__7_2_OFFSET UNITYSDK_OFFSET(0xF07C000)
#define NODEGRAPH_MAINCITY_ADDPHOTOQUEST__ONREGISTERPARAM_B__7_3_OFFSET UNITYSDK_OFFSET(0xF07C030)
#define NODEGRAPH_MAINCITY_ADDPHOTOQUEST___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0xF07C540)
#define NODEGRAPH_MAINCITY_ADDPHOTOQUEST___BASE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xF07C5E0)
#define NODEGRAPH_MAINCITY_ADDPHOTOQUEST___BASE_ONNODEDONE_OFFSET UNITYSDK_OFFSET(0xF07C670)
#define NODEGRAPH_MAINCITY_ADDPHOTOQUEST___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xF07C680)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int AddPhotoQuest_TypeDefinitionIndex = 53650;

	class AddPhotoQuest : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::NodeGraph::GraphOutputPort* _onBlackCurtain; // 0x58
		::NodeGraph::GraphOutputPort* _onFinish; // 0x60
		::System::Int32 photoQuestId; // 0x68
		::System::Single FadeTime; // 0x6C
		::System::Single DelayTime; // 0x70
		::System::Boolean isSelf; // 0x74

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraph)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDPHOTOQUEST__CTOR_OFFSET))(this, nodeGraph);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDPHOTOQUEST_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDPHOTOQUEST_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void OnFinishHandle(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDPHOTOQUEST_ONFINISHHANDLE_OFFSET))(this, args);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDPHOTOQUEST_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void OnNodeDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDPHOTOQUEST_ONNODEDONE_OFFSET))(this);
		}

		::System::Void OnClickPhotoClose(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDPHOTOQUEST_ONCLICKPHOTOCLOSE_OFFSET))(this, args);
		}

		::System::Void _OnRegisterParam_b__7_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDPHOTOQUEST__ONREGISTERPARAM_B__7_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__7_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDPHOTOQUEST__ONREGISTERPARAM_B__7_1_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__7_2(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDPHOTOQUEST__ONREGISTERPARAM_B__7_2_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__7_3(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDPHOTOQUEST__ONREGISTERPARAM_B__7_3_OFFSET))(this, node);
		}

		::System::Void _OnClickPhotoClose_b__12_0(::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDPHOTOQUEST__ONCLICKPHOTOCLOSE_B__12_0_OFFSET))(this, _);
		}

		::System::Void _OnClickPhotoClose_b__12_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDPHOTOQUEST__ONCLICKPHOTOCLOSE_B__12_1_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDPHOTOQUEST___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void __base_OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDPHOTOQUEST___BASE_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void __base_OnNodeDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDPHOTOQUEST___BASE_ONNODEDONE_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ADDPHOTOQUEST___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
