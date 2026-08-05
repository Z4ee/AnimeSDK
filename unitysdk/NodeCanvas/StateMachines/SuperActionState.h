#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/StateMachines/FSMState.h"

namespace NodeCanvas::Framework { class ActionList; }
namespace NodeCanvas::Framework { class Graph; }

#define NODECANVAS_STATEMACHINES_SUPERACTIONSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1EB85F30)
#define NODECANVAS_STATEMACHINES_SUPERACTIONSTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x1EB86000)
#define NODECANVAS_STATEMACHINES_SUPERACTIONSTATE_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1EB860F0)
#define NODECANVAS_STATEMACHINES_SUPERACTIONSTATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EB85F40)
#define NODECANVAS_STATEMACHINES_SUPERACTIONSTATE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1EB85CA0)
#define NODECANVAS_STATEMACHINES_SUPERACTIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB86160)

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int SuperActionState_TypeDefinitionIndex = 30202;

	class SuperActionState : public ::NodeCanvas::StateMachines::FSMState
	{
	public:
		::NodeCanvas::Framework::ActionList* _onUpdateList; // 0x80
		::NodeCanvas::Framework::ActionList* _onEnterList; // 0x88
		::NodeCanvas::Framework::ActionList* _onExitList; // 0x90
		::System::Boolean enterListFinished; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_SUPERACTIONSTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnValidate(::NodeCanvas::Framework::Graph* assignedGraph)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_SUPERACTIONSTATE_ONVALIDATE_OFFSET))(this, assignedGraph);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_SUPERACTIONSTATE_ONENTER_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_SUPERACTIONSTATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_SUPERACTIONSTATE_ONEXIT_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_SUPERACTIONSTATE_ONPAUSE_OFFSET))(this);
		}
	};
}
