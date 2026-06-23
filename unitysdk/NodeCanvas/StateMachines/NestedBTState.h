#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/StateMachines/FSMStateNested_1.h"
#include "unitysdk/NodeCanvas/StateMachines/NestedBTState_BTExecutionMode.h"
#include "unitysdk/NodeCanvas/StateMachines/NestedBTState_BTExitMode.h"

namespace NodeCanvas::BehaviourTrees { class BehaviourTree; }
namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_STATEMACHINES_NESTEDBTSTATE_GET_SUBGRAPHPARAMETER_OFFSET UNITYSDK_OFFSET(0x1D809420)
#define NODECANVAS_STATEMACHINES_NESTEDBTSTATE_GET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1D809360)
#define NODECANVAS_STATEMACHINES_NESTEDBTSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1D809430)
#define NODECANVAS_STATEMACHINES_NESTEDBTSTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x1D8098F0)
#define NODECANVAS_STATEMACHINES_NESTEDBTSTATE_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1D809860)
#define NODECANVAS_STATEMACHINES_NESTEDBTSTATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D809750)
#define NODECANVAS_STATEMACHINES_NESTEDBTSTATE_SET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1D8093C0)
#define NODECANVAS_STATEMACHINES_NESTEDBTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D809A80)

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int NestedBTState_TypeDefinitionIndex = 30281;

	class NestedBTState : public ::NodeCanvas::StateMachines::FSMStateNested_1<::NodeCanvas::BehaviourTrees::BehaviourTree*>
	{
	public:
		::System::String* successEvent; // 0x98
		::System::String* failureEvent; // 0xA0
		::NodeCanvas::Framework::BBParameter_1<::NodeCanvas::BehaviourTrees::BehaviourTree*>* _nestedBT; // 0xA8
		::NodeCanvas::StateMachines::NestedBTState_BTExitMode exitMode; // 0xB0
		::NodeCanvas::StateMachines::NestedBTState_BTExecutionMode executionMode; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDBTSTATE__CTOR_OFFSET))(this);
		}

		::NodeCanvas::BehaviourTrees::BehaviourTree* get_subGraph()
		{
			return ((::NodeCanvas::BehaviourTrees::BehaviourTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDBTSTATE_GET_SUBGRAPH_OFFSET))(this);
		}

		::System::Void set_subGraph(::NodeCanvas::BehaviourTrees::BehaviourTree* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::BehaviourTrees::BehaviourTree*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDBTSTATE_SET_SUBGRAPH_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::BBParameter* get_subGraphParameter()
		{
			return ((::NodeCanvas::Framework::BBParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDBTSTATE_GET_SUBGRAPHPARAMETER_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDBTSTATE_ONENTER_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDBTSTATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnFinish(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDBTSTATE_ONFINISH_OFFSET))(this, success);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDBTSTATE_ONEXIT_OFFSET))(this);
		}
	};
}
