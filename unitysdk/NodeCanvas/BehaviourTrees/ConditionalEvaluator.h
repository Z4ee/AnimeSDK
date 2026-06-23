#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTDecorator.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"
#include "unitysdk/ParadoxNotion/CompactStatus.h"

namespace NodeCanvas::Framework { class ConditionTask; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Task; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_CONDITIONALEVALUATOR_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1D83FB50)
#define NODECANVAS_BEHAVIOURTREES_CONDITIONALEVALUATOR_GET_TASK_OFFSET UNITYSDK_OFFSET(0x1D83FAD0)
#define NODECANVAS_BEHAVIOURTREES_CONDITIONALEVALUATOR_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D83FB70)
#define NODECANVAS_BEHAVIOURTREES_CONDITIONALEVALUATOR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1D840000)
#define NODECANVAS_BEHAVIOURTREES_CONDITIONALEVALUATOR_SET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1D83FB60)
#define NODECANVAS_BEHAVIOURTREES_CONDITIONALEVALUATOR_SET_TASK_OFFSET UNITYSDK_OFFSET(0x1D83FAE0)
#define NODECANVAS_BEHAVIOURTREES_CONDITIONALEVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D840050)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int ConditionalEvaluator_TypeDefinitionIndex = 30540;

	class ConditionalEvaluator : public ::NodeCanvas::BehaviourTrees::BTDecorator
	{
	public:
		::NodeCanvas::Framework::ConditionTask* _condition; // 0x78
		::System::Boolean isDynamic; // 0x80
		::System::Boolean accessed; // 0x81
		::ParadoxNotion::CompactStatus conditionFailReturn; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_CONDITIONALEVALUATOR__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::Task* get_task()
		{
			return ((::NodeCanvas::Framework::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_CONDITIONALEVALUATOR_GET_TASK_OFFSET))(this);
		}

		::System::Void set_task(::NodeCanvas::Framework::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Task*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_CONDITIONALEVALUATOR_SET_TASK_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::ConditionTask* get_condition()
		{
			return ((::NodeCanvas::Framework::ConditionTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_CONDITIONALEVALUATOR_GET_CONDITION_OFFSET))(this);
		}

		::System::Void set_condition(::NodeCanvas::Framework::ConditionTask* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ConditionTask*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_CONDITIONALEVALUATOR_SET_CONDITION_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_CONDITIONALEVALUATOR_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_CONDITIONALEVALUATOR_ONRESET_OFFSET))(this);
		}
	};
}
