#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EC9E7818B91C3AA0.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_DISPATCHEVENT_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xF07C9F0)
#define NODEGRAPH_MAINCITY_DISPATCHEVENT_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xF07C8C0)
#define NODEGRAPH_MAINCITY_DISPATCHEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xF07C710)
#define NODEGRAPH_MAINCITY_DISPATCHEVENT__ONREGISTERPARAM_B__2_0_OFFSET UNITYSDK_OFFSET(0xF07CB20)
#define NODEGRAPH_MAINCITY_DISPATCHEVENT___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xF07CBE0)
#define NODEGRAPH_MAINCITY_DISPATCHEVENT___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xF07CBF0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int DispatchEvent_TypeDefinitionIndex = 56113;

	class DispatchEvent : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::Enum_3_EC9E7818B91C3AA0 eventType; // 0x58

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_DISPATCHEVENT__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_DISPATCHEVENT_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_DISPATCHEVENT_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__2_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_DISPATCHEVENT__ONREGISTERPARAM_B__2_0_OFFSET))(this, node);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_DISPATCHEVENT___BASE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_DISPATCHEVENT___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
