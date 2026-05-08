#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/StateMachines/FSMState.h"

namespace NodeCanvas::Framework { class ActionList; }
namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class Task; }

#define NODECANVAS_STATEMACHINES_ACTIONSTATE_GET_ACTIONLIST_OFFSET UNITYSDK_OFFSET(0x1B4B7760)
#define NODECANVAS_STATEMACHINES_ACTIONSTATE_GET_REPEATSTATEACTIONS_OFFSET UNITYSDK_OFFSET(0x1B4B7780)
#define NODECANVAS_STATEMACHINES_ACTIONSTATE_GET_TASK_OFFSET UNITYSDK_OFFSET(0x1B4B76E0)
#define NODECANVAS_STATEMACHINES_ACTIONSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1B4B7870)
#define NODECANVAS_STATEMACHINES_ACTIONSTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x1B4B7B70)
#define NODECANVAS_STATEMACHINES_ACTIONSTATE_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1B4B7BC0)
#define NODECANVAS_STATEMACHINES_ACTIONSTATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B4B7880)
#define NODECANVAS_STATEMACHINES_ACTIONSTATE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1B4B77A0)
#define NODECANVAS_STATEMACHINES_ACTIONSTATE_SET_ACTIONLIST_OFFSET UNITYSDK_OFFSET(0x1B4B7770)
#define NODECANVAS_STATEMACHINES_ACTIONSTATE_SET_REPEATSTATEACTIONS_OFFSET UNITYSDK_OFFSET(0x1B4B7790)
#define NODECANVAS_STATEMACHINES_ACTIONSTATE_SET_TASK_OFFSET UNITYSDK_OFFSET(0x1B4B76F0)
#define NODECANVAS_STATEMACHINES_ACTIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B7C00)

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int ActionState_TypeDefinitionIndex = 28117;

	class ActionState : public ::NodeCanvas::StateMachines::FSMState
	{
	public:
		::NodeCanvas::Framework::ActionList* _actionList; // 0x80
		::System::Boolean _repeatStateActions; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_ACTIONSTATE__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::Task* get_task()
		{
			return ((::NodeCanvas::Framework::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_ACTIONSTATE_GET_TASK_OFFSET))(this);
		}

		::System::Void set_task(::NodeCanvas::Framework::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Task*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_ACTIONSTATE_SET_TASK_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::ActionList* get_actionList()
		{
			return ((::NodeCanvas::Framework::ActionList*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_ACTIONSTATE_GET_ACTIONLIST_OFFSET))(this);
		}

		::System::Void set_actionList(::NodeCanvas::Framework::ActionList* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ActionList*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_ACTIONSTATE_SET_ACTIONLIST_OFFSET))(this, value);
		}

		::System::Boolean get_repeatStateActions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_ACTIONSTATE_GET_REPEATSTATEACTIONS_OFFSET))(this);
		}

		::System::Void set_repeatStateActions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_ACTIONSTATE_SET_REPEATSTATEACTIONS_OFFSET))(this, value);
		}

		::System::Void OnValidate(::NodeCanvas::Framework::Graph* assignedGraph)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_ACTIONSTATE_ONVALIDATE_OFFSET))(this, assignedGraph);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_ACTIONSTATE_ONENTER_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_ACTIONSTATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_ACTIONSTATE_ONEXIT_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_ACTIONSTATE_ONPAUSE_OFFSET))(this);
		}
	};
}
