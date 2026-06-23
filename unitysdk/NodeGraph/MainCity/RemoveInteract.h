#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_REMOVEINTERACT_GETUID_OFFSET UNITYSDK_OFFSET(0xE0439A0)
#define NODEGRAPH_MAINCITY_REMOVEINTERACT_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xE043C00)
#define NODEGRAPH_MAINCITY_REMOVEINTERACT_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xE0437F0)
#define NODEGRAPH_MAINCITY_REMOVEINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0xE043640)
#define NODEGRAPH_MAINCITY_REMOVEINTERACT__ONREGISTERPARAM_B__3_0_OFFSET UNITYSDK_OFFSET(0xE043D80)
#define NODEGRAPH_MAINCITY_REMOVEINTERACT__ONREGISTERPARAM_B__3_1_OFFSET UNITYSDK_OFFSET(0xE043DB0)
#define NODEGRAPH_MAINCITY_REMOVEINTERACT___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xE043DE0)
#define NODEGRAPH_MAINCITY_REMOVEINTERACT___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xE043DF0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int RemoveInteract_TypeDefinitionIndex = 73358;

	class RemoveInteract : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::Int32 targetNpcTag; // 0x58
		::System::Int32 interactId; // 0x5C

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REMOVEINTERACT__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REMOVEINTERACT_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::UInt64 GetUid()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REMOVEINTERACT_GETUID_OFFSET))(this);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REMOVEINTERACT_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__3_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REMOVEINTERACT__ONREGISTERPARAM_B__3_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__3_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REMOVEINTERACT__ONREGISTERPARAM_B__3_1_OFFSET))(this, node);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REMOVEINTERACT___BASE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REMOVEINTERACT___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
