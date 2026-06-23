#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/MainCity/Trigger.h"

namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_CHECKENTITYREADY_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0xEBE5560)
#define NODEGRAPH_MAINCITY_CHECKENTITYREADY_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xEBE5460)
#define NODEGRAPH_MAINCITY_CHECKENTITYREADY__CTOR_OFFSET UNITYSDK_OFFSET(0xEBE5450)
#define NODEGRAPH_MAINCITY_CHECKENTITYREADY__ONREGISTERPARAM_B__2_0_OFFSET UNITYSDK_OFFSET(0xEBE5710)
#define NODEGRAPH_MAINCITY_CHECKENTITYREADY___BASE_CHECKCONDITION_OFFSET UNITYSDK_OFFSET(0xEBE5740)
#define NODEGRAPH_MAINCITY_CHECKENTITYREADY___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xEBE57D0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int CheckEntityReady_TypeDefinitionIndex = 72962;

	class CheckEntityReady : public ::NodeGraph::MainCity::Trigger
	{
	public:
		::System::Int32 npcTag; // 0x88

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKENTITYREADY__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKENTITYREADY_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Boolean CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKENTITYREADY_CHECKCONDITION_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__2_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKENTITYREADY__ONREGISTERPARAM_B__2_0_OFFSET))(this, node);
		}

		::System::Boolean __base_CheckCondition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKENTITYREADY___BASE_CHECKCONDITION_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHECKENTITYREADY___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
