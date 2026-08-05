#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphTask.h"

namespace NodeGraph::MainCity { class Trigger; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_MAINCITY_TRIGGERGROUPTASK_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x954CC30)
#define NODEGRAPH_MAINCITY_TRIGGERGROUPTASK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x954CD60)
#define NODEGRAPH_MAINCITY_TRIGGERGROUPTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x954D0A0)
#define NODEGRAPH_MAINCITY_TRIGGERGROUPTASK__ONREGISTERPARAM_B__2_0_OFFSET UNITYSDK_OFFSET(0x954D1D0)
#define NODEGRAPH_MAINCITY_TRIGGERGROUPTASK___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x954D540)
#define NODEGRAPH_MAINCITY_TRIGGERGROUPTASK___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x954D5D0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int TriggerGroupTask_TypeDefinitionIndex = 70322;

	class TriggerGroupTask : public ::NodeGraph::GraphTask
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* triggerNodeIds; // 0x20
		::System::Collections::Generic::List_1<::NodeGraph::MainCity::Trigger*>* _triggers; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_TRIGGERGROUPTASK__CTOR_OFFSET))(this);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_TRIGGERGROUPTASK_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_TRIGGERGROUPTASK_ONUPDATE_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__2_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_TRIGGERGROUPTASK__ONREGISTERPARAM_B__2_0_OFFSET))(this, node);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_TRIGGERGROUPTASK___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_TRIGGERGROUPTASK___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
