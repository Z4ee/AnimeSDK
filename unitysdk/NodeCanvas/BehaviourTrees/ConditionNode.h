#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTNode.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class ConditionTask; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Task; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_CONDITIONNODE_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1E22F520)
#define NODECANVAS_BEHAVIOURTREES_CONDITIONNODE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E22F540)
#define NODECANVAS_BEHAVIOURTREES_CONDITIONNODE_GET_TASK_OFFSET UNITYSDK_OFFSET(0x1E22F4A0)
#define NODECANVAS_BEHAVIOURTREES_CONDITIONNODE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E22F570)
#define NODECANVAS_BEHAVIOURTREES_CONDITIONNODE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E22F650)
#define NODECANVAS_BEHAVIOURTREES_CONDITIONNODE_SET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1E22F530)
#define NODECANVAS_BEHAVIOURTREES_CONDITIONNODE_SET_TASK_OFFSET UNITYSDK_OFFSET(0x1E22F4B0)
#define NODECANVAS_BEHAVIOURTREES_CONDITIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E22F690)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int ConditionNode_TypeDefinitionIndex = 30076;

	class ConditionNode : public ::NodeCanvas::BehaviourTrees::BTNode
	{
	public:
		::NodeCanvas::Framework::ConditionTask* _condition; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_CONDITIONNODE__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::Task* get_task()
		{
			return ((::NodeCanvas::Framework::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_CONDITIONNODE_GET_TASK_OFFSET))(this);
		}

		::System::Void set_task(::NodeCanvas::Framework::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Task*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_CONDITIONNODE_SET_TASK_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::ConditionTask* get_condition()
		{
			return ((::NodeCanvas::Framework::ConditionTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_CONDITIONNODE_GET_CONDITION_OFFSET))(this);
		}

		::System::Void set_condition(::NodeCanvas::Framework::ConditionTask* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ConditionTask*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_CONDITIONNODE_SET_CONDITION_OFFSET))(this, value);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_CONDITIONNODE_GET_NAME_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_CONDITIONNODE_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_CONDITIONNODE_ONRESET_OFFSET))(this);
		}
	};
}
