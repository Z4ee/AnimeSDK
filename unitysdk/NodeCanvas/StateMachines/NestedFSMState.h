#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/StateMachines/FSMStateNested_1.h"
#include "unitysdk/NodeCanvas/StateMachines/NestedFSMState_FSMExitMode.h"

namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace NodeCanvas::StateMachines { class FSM; }

#define NODECANVAS_STATEMACHINES_NESTEDFSMSTATE_GET_SUBGRAPHPARAMETER_OFFSET UNITYSDK_OFFSET(0x1AFCF800)
#define NODECANVAS_STATEMACHINES_NESTEDFSMSTATE_GET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1AFCF740)
#define NODECANVAS_STATEMACHINES_NESTEDFSMSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1AFCF810)
#define NODECANVAS_STATEMACHINES_NESTEDFSMSTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x1AFCFAE0)
#define NODECANVAS_STATEMACHINES_NESTEDFSMSTATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AFCFA70)
#define NODECANVAS_STATEMACHINES_NESTEDFSMSTATE_SET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1AFCF7A0)
#define NODECANVAS_STATEMACHINES_NESTEDFSMSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFCFC70)

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int NestedFSMState_TypeDefinitionIndex = 26500;

	class NestedFSMState : public ::NodeCanvas::StateMachines::FSMStateNested_1<::NodeCanvas::StateMachines::FSM*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::NodeCanvas::StateMachines::FSM*>* _nestedFSM; // 0x98
		::NodeCanvas::StateMachines::NestedFSMState_FSMExitMode exitMode; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDFSMSTATE__CTOR_OFFSET))(this);
		}

		::NodeCanvas::StateMachines::FSM* get_subGraph()
		{
			return ((::NodeCanvas::StateMachines::FSM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDFSMSTATE_GET_SUBGRAPH_OFFSET))(this);
		}

		::System::Void set_subGraph(::NodeCanvas::StateMachines::FSM* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::StateMachines::FSM*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDFSMSTATE_SET_SUBGRAPH_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::BBParameter* get_subGraphParameter()
		{
			return ((::NodeCanvas::Framework::BBParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDFSMSTATE_GET_SUBGRAPHPARAMETER_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDFSMSTATE_ONENTER_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDFSMSTATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDFSMSTATE_ONEXIT_OFFSET))(this);
		}
	};
}
