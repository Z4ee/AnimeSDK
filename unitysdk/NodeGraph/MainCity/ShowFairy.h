#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"

namespace NodeGraph { class GraphInputValuePort; }
namespace NodeGraph { class GraphOutputPort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_MAINCITY_SHOWFAIRY_ADDIK_OFFSET UNITYSDK_OFFSET(0x10CB8DE0)
#define NODEGRAPH_MAINCITY_SHOWFAIRY_CLOSEIK_OFFSET UNITYSDK_OFFSET(0x10CB8C10)
#define NODEGRAPH_MAINCITY_SHOWFAIRY_ONFAIRYDESTROYHANDLE_OFFSET UNITYSDK_OFFSET(0x10CB8FC0)
#define NODEGRAPH_MAINCITY_SHOWFAIRY_ONFAIRYFADEOUTHANDLE_OFFSET UNITYSDK_OFFSET(0x10CB98A0)
#define NODEGRAPH_MAINCITY_SHOWFAIRY_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x10CB7F80)
#define NODEGRAPH_MAINCITY_SHOWFAIRY_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0x10CB9C60)
#define NODEGRAPH_MAINCITY_SHOWFAIRY_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0x10CB9480)
#define NODEGRAPH_MAINCITY_SHOWFAIRY_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x10CB7C70)
#define NODEGRAPH_MAINCITY_SHOWFAIRY_REALSTART_OFFSET UNITYSDK_OFFSET(0x10CB8350)
#define NODEGRAPH_MAINCITY_SHOWFAIRY_SHOWSINGLEFAIRY_OFFSET UNITYSDK_OFFSET(0x10CB88A0)
#define NODEGRAPH_MAINCITY_SHOWFAIRY__CTOR_OFFSET UNITYSDK_OFFSET(0x10CB7BA0)
#define NODEGRAPH_MAINCITY_SHOWFAIRY__ONREGISTERPARAM_B__16_0_OFFSET UNITYSDK_OFFSET(0x10CBA140)
#define NODEGRAPH_MAINCITY_SHOWFAIRY__ONREGISTERPARAM_B__16_1_OFFSET UNITYSDK_OFFSET(0x10CBA9B0)
#define NODEGRAPH_MAINCITY_SHOWFAIRY__ONREGISTERPARAM_B__16_2_OFFSET UNITYSDK_OFFSET(0x10CBAE70)
#define NODEGRAPH_MAINCITY_SHOWFAIRY__ONREGISTERPARAM_B__16_3_OFFSET UNITYSDK_OFFSET(0x10CBAEA0)
#define NODEGRAPH_MAINCITY_SHOWFAIRY__ONREGISTERPARAM_B__16_4_OFFSET UNITYSDK_OFFSET(0x10CBAED0)
#define NODEGRAPH_MAINCITY_SHOWFAIRY__SHOWSINGLEFAIRY_B__19_0_OFFSET UNITYSDK_OFFSET(0x10CBB040)
#define NODEGRAPH_MAINCITY_SHOWFAIRY__SHOWSINGLEFAIRY_B__19_1_OFFSET UNITYSDK_OFFSET(0x10CBAF00)
#define NODEGRAPH_MAINCITY_SHOWFAIRY___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x10CBB1A0)
#define NODEGRAPH_MAINCITY_SHOWFAIRY___BASE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0x10CBB240)
#define NODEGRAPH_MAINCITY_SHOWFAIRY___BASE_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0x10CBB2D0)
#define NODEGRAPH_MAINCITY_SHOWFAIRY___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x10CBB370)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int ShowFairy_TypeDefinitionIndex = 72815;

	class ShowFairy : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* _currentIdList; // 0x58
		::NodeGraph::GraphOutputPort* _onFairyEnd; // 0x60
		::NodeGraph::GraphInputValuePort* _fairyIdListPort; // 0x68
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* fairyIdList; // 0x70
		::System::Action* _callback; // 0x78
		::System::Collections::Generic::List_1<::System::Int32>* ikFairyList; // 0x80
		::System::Single _timer; // 0x88
		::System::Boolean _fairyFinish; // 0x8C
		::System::Boolean inPhotoPage; // 0x8D
		::System::Boolean useFairy; // 0x8E
		::System::Boolean pushedIk; // 0x8F
		::System::Boolean _fairyFadeOut; // 0x90
		::System::Boolean _started; // 0x91
		::System::Int32 _currentIndex; // 0x94
		::System::Int32 ikNpcTag; // 0x98

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void RealStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY_REALSTART_OFFSET))(this);
		}

		::System::Void ShowSingleFairy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY_SHOWSINGLEFAIRY_OFFSET))(this);
		}

		::System::Void OnFairyDestroyHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY_ONFAIRYDESTROYHANDLE_OFFSET))(this, obj);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeUpdate(::System::Single deltaTime)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY_ONNODEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnFairyFadeOutHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY_ONFAIRYFADEOUTHANDLE_OFFSET))(this, obj);
		}

		::System::Void AddIk()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY_ADDIK_OFFSET))(this);
		}

		::System::Void CloseIk()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY_CLOSEIK_OFFSET))(this);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__16_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY__ONREGISTERPARAM_B__16_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__16_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY__ONREGISTERPARAM_B__16_1_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__16_2(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY__ONREGISTERPARAM_B__16_2_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__16_3(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY__ONREGISTERPARAM_B__16_3_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__16_4(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY__ONREGISTERPARAM_B__16_4_OFFSET))(this, node);
		}

		::System::Void _ShowSingleFairy_b__19_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY__SHOWSINGLEFAIRY_B__19_1_OFFSET))(this);
		}

		::System::Void _ShowSingleFairy_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY__SHOWSINGLEFAIRY_B__19_0_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void __base_OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY___BASE_ONNODECLEAR_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeUpdate(::System::Single P0)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY___BASE_ONNODEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SHOWFAIRY___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
