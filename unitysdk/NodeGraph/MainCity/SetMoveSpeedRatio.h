#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class GraphInputValuePort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x16145110)
#define NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0x161453B0)
#define NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO_ONNODEEND_OFFSET UNITYSDK_OFFSET(0x16145590)
#define NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x16144F60)
#define NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x16144E00)
#define NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO__ONREGISTERPARAM_B__4_0_OFFSET UNITYSDK_OFFSET(0x16145770)
#define NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO__ONREGISTERPARAM_B__4_1_OFFSET UNITYSDK_OFFSET(0x161457A0)
#define NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x161457D0)
#define NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO___BASE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0x161457E0)
#define NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO___BASE_ONNODEEND_OFFSET UNITYSDK_OFFSET(0x16145870)
#define NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x16145900)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int SetMoveSpeedRatio_TypeDefinitionIndex = 51404;

	class SetMoveSpeedRatio : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::NodeGraph::GraphInputValuePort* _speedInput; // 0x58
		::System::Int32 npcTag; // 0x60
		::System::Single speedRatio; // 0x64

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void OnNodeEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO_ONNODEEND_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__4_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO__ONREGISTERPARAM_B__4_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__4_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO__ONREGISTERPARAM_B__4_1_OFFSET))(this, node);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO___BASE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO___BASE_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void __base_OnNodeEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO___BASE_ONNODEEND_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETMOVESPEEDRATIO___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
