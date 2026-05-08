#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/StateMachines/FSMStateNested_1.h"

namespace FlowCanvas { class FlowScript; }
namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_GET_SUBGRAPHPARAMETER_OFFSET UNITYSDK_OFFSET(0x1B7E9C60)
#define NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_GET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1B7E9BA0)
#define NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1B7E9C70)
#define NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x1B7E9F20)
#define NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_ONFLOWSCRIPTFINISHED_OFFSET UNITYSDK_OFFSET(0x1B7E9EA0)
#define NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1B7E9E30)
#define NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_SET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1B7E9C00)
#define NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7EA080)

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int FlowScriptState_TypeDefinitionIndex = 26973;

	class FlowScriptState : public ::NodeCanvas::StateMachines::FSMStateNested_1<::FlowCanvas::FlowScript*>
	{
	public:
		::System::String* failureEvent; // 0x98
		::System::String* successEvent; // 0xA0
		::NodeCanvas::Framework::BBParameter_1<::FlowCanvas::FlowScript*>* _flowScript; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE__CTOR_OFFSET))(this);
		}

		::FlowCanvas::FlowScript* get_subGraph()
		{
			return ((::FlowCanvas::FlowScript*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_GET_SUBGRAPH_OFFSET))(this);
		}

		::System::Void set_subGraph(::FlowCanvas::FlowScript* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowScript*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_SET_SUBGRAPH_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::BBParameter* get_subGraphParameter()
		{
			return ((::NodeCanvas::Framework::BBParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_GET_SUBGRAPHPARAMETER_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_ONENTER_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnFlowScriptFinished(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_ONFLOWSCRIPTFINISHED_OFFSET))(this, success);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_ONEXIT_OFFSET))(this);
		}
	};
}
