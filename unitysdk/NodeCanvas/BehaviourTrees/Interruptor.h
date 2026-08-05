#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTDecorator.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class ConditionTask; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Task; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_INTERRUPTOR_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1E8C0C90)
#define NODECANVAS_BEHAVIOURTREES_INTERRUPTOR_GET_TASK_OFFSET UNITYSDK_OFFSET(0x1E8C0CB0)
#define NODECANVAS_BEHAVIOURTREES_INTERRUPTOR_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E8C0D30)
#define NODECANVAS_BEHAVIOURTREES_INTERRUPTOR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E8C1010)
#define NODECANVAS_BEHAVIOURTREES_INTERRUPTOR_SET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1E8C0CA0)
#define NODECANVAS_BEHAVIOURTREES_INTERRUPTOR_SET_TASK_OFFSET UNITYSDK_OFFSET(0x1E8C0CC0)
#define NODECANVAS_BEHAVIOURTREES_INTERRUPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C1050)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Interruptor_TypeDefinitionIndex = 30663;

	class Interruptor : public ::NodeCanvas::BehaviourTrees::BTDecorator
	{
	public:
		::NodeCanvas::Framework::ConditionTask* _condition; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_INTERRUPTOR__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::ConditionTask* get_condition()
		{
			return ((::NodeCanvas::Framework::ConditionTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_INTERRUPTOR_GET_CONDITION_OFFSET))(this);
		}

		::System::Void set_condition(::NodeCanvas::Framework::ConditionTask* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ConditionTask*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_INTERRUPTOR_SET_CONDITION_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Task* get_task()
		{
			return ((::NodeCanvas::Framework::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_INTERRUPTOR_GET_TASK_OFFSET))(this);
		}

		::System::Void set_task(::NodeCanvas::Framework::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Task*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_INTERRUPTOR_SET_TASK_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_INTERRUPTOR_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_INTERRUPTOR_ONRESET_OFFSET))(this);
		}
	};
}
