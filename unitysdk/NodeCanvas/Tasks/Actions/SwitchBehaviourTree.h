#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::BehaviourTrees { class BehaviourTree; }
namespace NodeCanvas::BehaviourTrees { class BehaviourTreeOwner; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_SWITCHBEHAVIOURTREE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EA9E220)
#define NODECANVAS_TASKS_ACTIONS_SWITCHBEHAVIOURTREE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EA9E290)
#define NODECANVAS_TASKS_ACTIONS_SWITCHBEHAVIOURTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA9E3C0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SwitchBehaviourTree_TypeDefinitionIndex = 31131;

	class SwitchBehaviourTree : public ::NodeCanvas::Framework::ActionTask_1<::NodeCanvas::BehaviourTrees::BehaviourTreeOwner*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::NodeCanvas::BehaviourTrees::BehaviourTree*>* behaviourTree; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SWITCHBEHAVIOURTREE__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SWITCHBEHAVIOURTREE_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SWITCHBEHAVIOURTREE_ONEXECUTE_OFFSET))(this);
		}
	};
}
