#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Connection.h"
#include "unitysdk/NodeCanvas/StateMachines/FSM_TransitionCallMode.h"

namespace NodeCanvas::Framework { class ConditionTask; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Task; }
namespace UnityEngine { class Component; }

#define NODECANVAS_STATEMACHINES_FSMCONNECTION_DISABLECONDITION_OFFSET UNITYSDK_OFFSET(0x1AFCF600)
#define NODECANVAS_STATEMACHINES_FSMCONNECTION_ENABLECONDITION_OFFSET UNITYSDK_OFFSET(0x1AFCF5A0)
#define NODECANVAS_STATEMACHINES_FSMCONNECTION_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1AFCF4E0)
#define NODECANVAS_STATEMACHINES_FSMCONNECTION_GET_TASK_OFFSET UNITYSDK_OFFSET(0x1AFCF500)
#define NODECANVAS_STATEMACHINES_FSMCONNECTION_GET_TRANSITIONCALLMODE_OFFSET UNITYSDK_OFFSET(0x1AFCF580)
#define NODECANVAS_STATEMACHINES_FSMCONNECTION_PERFORMTRANSITION_OFFSET UNITYSDK_OFFSET(0x1AFCF640)
#define NODECANVAS_STATEMACHINES_FSMCONNECTION_SET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1AFCF4F0)
#define NODECANVAS_STATEMACHINES_FSMCONNECTION_SET_TASK_OFFSET UNITYSDK_OFFSET(0x1AFCF510)
#define NODECANVAS_STATEMACHINES_FSMCONNECTION_SET_TRANSITIONCALLMODE_OFFSET UNITYSDK_OFFSET(0x1AFCF590)
#define NODECANVAS_STATEMACHINES_FSMCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFCF730)

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int FSMConnection_TypeDefinitionIndex = 26600;

	class FSMConnection : public ::NodeCanvas::Framework::Connection
	{
	public:
		::NodeCanvas::Framework::ConditionTask* _condition; // 0x30
		::NodeCanvas::StateMachines::FSM_TransitionCallMode _transitionCallMode; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMCONNECTION__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::ConditionTask* get_condition()
		{
			return ((::NodeCanvas::Framework::ConditionTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMCONNECTION_GET_CONDITION_OFFSET))(this);
		}

		::System::Void set_condition(::NodeCanvas::Framework::ConditionTask* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ConditionTask*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMCONNECTION_SET_CONDITION_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Task* get_task()
		{
			return ((::NodeCanvas::Framework::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMCONNECTION_GET_TASK_OFFSET))(this);
		}

		::System::Void set_task(::NodeCanvas::Framework::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Task*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMCONNECTION_SET_TASK_OFFSET))(this, value);
		}

		::NodeCanvas::StateMachines::FSM_TransitionCallMode get_transitionCallMode()
		{
			return ((::NodeCanvas::StateMachines::FSM_TransitionCallMode(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMCONNECTION_GET_TRANSITIONCALLMODE_OFFSET))(this);
		}

		::System::Void set_transitionCallMode(::NodeCanvas::StateMachines::FSM_TransitionCallMode value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::StateMachines::FSM_TransitionCallMode))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMCONNECTION_SET_TRANSITIONCALLMODE_OFFSET))(this, value);
		}

		::System::Void EnableCondition(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMCONNECTION_ENABLECONDITION_OFFSET))(this, agent, blackboard);
		}

		::System::Void DisableCondition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMCONNECTION_DISABLECONDITION_OFFSET))(this);
		}

		::System::Void PerformTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FSMCONNECTION_PERFORMTRANSITION_OFFSET))(this);
		}
	};
}
