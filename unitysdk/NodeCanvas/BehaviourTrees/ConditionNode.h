#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTNode.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class ConditionTask; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Task; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_CONDITIONNODE_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1D5379E0)
#define NODECANVAS_BEHAVIOURTREES_CONDITIONNODE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D537A00)
#define NODECANVAS_BEHAVIOURTREES_CONDITIONNODE_GET_TASK_OFFSET UNITYSDK_OFFSET(0x1D537960)
#define NODECANVAS_BEHAVIOURTREES_CONDITIONNODE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D537A30)
#define NODECANVAS_BEHAVIOURTREES_CONDITIONNODE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1D537B10)
#define NODECANVAS_BEHAVIOURTREES_CONDITIONNODE_SET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1D5379F0)
#define NODECANVAS_BEHAVIOURTREES_CONDITIONNODE_SET_TASK_OFFSET UNITYSDK_OFFSET(0x1D537970)
#define NODECANVAS_BEHAVIOURTREES_CONDITIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D537B50)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int ConditionNode_TypeDefinitionIndex = 30596;

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
