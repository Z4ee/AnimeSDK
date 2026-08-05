#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class GraphInputValuePort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_HANDLEACTIONSTATE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x112B2790)
#define NODEGRAPH_MAINCITY_HANDLEACTIONSTATE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x112B25E0)
#define NODEGRAPH_MAINCITY_HANDLEACTIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x112B2480)
#define NODEGRAPH_MAINCITY_HANDLEACTIONSTATE__ONREGISTERPARAM_B__4_0_OFFSET UNITYSDK_OFFSET(0x112B2A10)
#define NODEGRAPH_MAINCITY_HANDLEACTIONSTATE__ONREGISTERPARAM_B__4_1_OFFSET UNITYSDK_OFFSET(0x112B2A40)
#define NODEGRAPH_MAINCITY_HANDLEACTIONSTATE___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x112B2A70)
#define NODEGRAPH_MAINCITY_HANDLEACTIONSTATE___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x112B2A80)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int HandleActionState_TypeDefinitionIndex = 54252;

	class HandleActionState : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::NodeGraph::GraphInputValuePort* actionStateIdInput; // 0x58
		::System::Int32 targetNpcTag; // 0x60
		::System::Int32 actionStateId; // 0x64

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_HANDLEACTIONSTATE__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_HANDLEACTIONSTATE_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_HANDLEACTIONSTATE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__4_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_HANDLEACTIONSTATE__ONREGISTERPARAM_B__4_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__4_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_HANDLEACTIONSTATE__ONREGISTERPARAM_B__4_1_OFFSET))(this, node);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_HANDLEACTIONSTATE___BASE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_HANDLEACTIONSTATE___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
