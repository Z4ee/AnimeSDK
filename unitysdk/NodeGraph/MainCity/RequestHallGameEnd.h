#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class GraphInputValuePort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x112B2E30)
#define NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x112B2C80)
#define NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND__CTOR_OFFSET UNITYSDK_OFFSET(0x112B2B10)
#define NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND__ONREGISTERPARAM_B__5_0_OFFSET UNITYSDK_OFFSET(0x112B37B0)
#define NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND__ONREGISTERPARAM_B__5_1_OFFSET UNITYSDK_OFFSET(0x112B3810)
#define NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x112B3840)
#define NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x112B3850)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int RequestHallGameEnd_TypeDefinitionIndex = 84431;

	class RequestHallGameEnd : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::NodeGraph::GraphInputValuePort* _specialInput2; // 0x58
		::NodeGraph::GraphInputValuePort* _specialInput; // 0x60
		::System::Boolean enable; // 0x68
		::System::Boolean isDateAtmo; // 0x69

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__5_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND__ONREGISTERPARAM_B__5_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__5_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND__ONREGISTERPARAM_B__5_1_OFFSET))(this, node);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND___BASE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REQUESTHALLGAMEEND___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
