#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/StateMachines/FSMNodeNested_1.h"

namespace FlowCanvas { class FlowScript; }
namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT_GET_ALLOWASPRIME_OFFSET UNITYSDK_OFFSET(0x1E6DC5F0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT_GET_MAXINCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1E6DC5D0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1E6DC5E0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E6DC5A0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT_GET_SUBGRAPHPARAMETER_OFFSET UNITYSDK_OFFSET(0x1E6DC6C0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT_GET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1E6DC600)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E6DC8B0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1E6DC6D0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT_SET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1E6DC660)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DC8C0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT__ONGRAPHSTARTED_B__14_0_OFFSET UNITYSDK_OFFSET(0x1E6DC8E0)

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int ConcurrentSubFlowScript_TypeDefinitionIndex = 29777;

	class ConcurrentSubFlowScript : public ::NodeCanvas::StateMachines::FSMNodeNested_1<::FlowCanvas::FlowScript*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::FlowCanvas::FlowScript*>* _subFlowScript; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_maxInConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT_GET_MAXINCONNECTIONS_OFFSET))(this);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}

		::System::Boolean get_allowAsPrime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT_GET_ALLOWASPRIME_OFFSET))(this);
		}

		::FlowCanvas::FlowScript* get_subGraph()
		{
			return ((::FlowCanvas::FlowScript*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT_GET_SUBGRAPH_OFFSET))(this);
		}

		::System::Void set_subGraph(::FlowCanvas::FlowScript* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowScript*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT_SET_SUBGRAPH_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::BBParameter* get_subGraphParameter()
		{
			return ((::NodeCanvas::Framework::BBParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT_GET_SUBGRAPHPARAMETER_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IUpdatable_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET))(this);
		}

		::System::Void _OnGraphStarted_b__14_0(::System::Boolean result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBFLOWSCRIPT__ONGRAPHSTARTED_B__14_0_OFFSET))(this, result);
		}
	};
}
