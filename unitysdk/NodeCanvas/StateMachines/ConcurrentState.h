#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/StateMachines/FSMNode.h"

namespace NodeCanvas::Framework { class ActionList; }
namespace NodeCanvas::Framework { class ConditionList; }
namespace NodeCanvas::Framework { class Graph; }
namespace System { class String; }

#define NODECANVAS_STATEMACHINES_CONCURRENTSTATE_GET_ACTIONLIST_OFFSET UNITYSDK_OFFSET(0x1D528EF0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSTATE_GET_ALLOWASPRIME_OFFSET UNITYSDK_OFFSET(0x1D528F80)
#define NODECANVAS_STATEMACHINES_CONCURRENTSTATE_GET_CONDITIONLIST_OFFSET UNITYSDK_OFFSET(0x1D528ED0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSTATE_GET_MAXINCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1D528F60)
#define NODECANVAS_STATEMACHINES_CONCURRENTSTATE_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1D528F70)
#define NODECANVAS_STATEMACHINES_CONCURRENTSTATE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D528F30)
#define NODECANVAS_STATEMACHINES_CONCURRENTSTATE_GET_REPEATSTATEACTIONS_OFFSET UNITYSDK_OFFSET(0x1D528F10)
#define NODECANVAS_STATEMACHINES_CONCURRENTSTATE_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D529220)
#define NODECANVAS_STATEMACHINES_CONCURRENTSTATE_ONGRAPHPAUSED_OFFSET UNITYSDK_OFFSET(0x1D5291E0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSTATE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1D5290E0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSTATE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1D529160)
#define NODECANVAS_STATEMACHINES_CONCURRENTSTATE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D528F90)
#define NODECANVAS_STATEMACHINES_CONCURRENTSTATE_SET_ACTIONLIST_OFFSET UNITYSDK_OFFSET(0x1D528F00)
#define NODECANVAS_STATEMACHINES_CONCURRENTSTATE_SET_CONDITIONLIST_OFFSET UNITYSDK_OFFSET(0x1D528EE0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSTATE_SET_REPEATSTATEACTIONS_OFFSET UNITYSDK_OFFSET(0x1D528F20)
#define NODECANVAS_STATEMACHINES_CONCURRENTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D529380)

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int ConcurrentState_TypeDefinitionIndex = 29248;

	class ConcurrentState : public ::NodeCanvas::StateMachines::FSMNode
	{
	public:
		::NodeCanvas::Framework::ActionList* _actionList; // 0x78
		::NodeCanvas::Framework::ConditionList* _conditionList; // 0x80
		::System::Boolean accessed; // 0x88
		::System::Boolean _repeatStateActions; // 0x89

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSTATE__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::ConditionList* get_conditionList()
		{
			return ((::NodeCanvas::Framework::ConditionList*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSTATE_GET_CONDITIONLIST_OFFSET))(this);
		}

		::System::Void set_conditionList(::NodeCanvas::Framework::ConditionList* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ConditionList*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSTATE_SET_CONDITIONLIST_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::ActionList* get_actionList()
		{
			return ((::NodeCanvas::Framework::ActionList*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSTATE_GET_ACTIONLIST_OFFSET))(this);
		}

		::System::Void set_actionList(::NodeCanvas::Framework::ActionList* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ActionList*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSTATE_SET_ACTIONLIST_OFFSET))(this, value);
		}

		::System::Boolean get_repeatStateActions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSTATE_GET_REPEATSTATEACTIONS_OFFSET))(this);
		}

		::System::Void set_repeatStateActions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSTATE_SET_REPEATSTATEACTIONS_OFFSET))(this, value);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSTATE_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_maxInConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSTATE_GET_MAXINCONNECTIONS_OFFSET))(this);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSTATE_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}

		::System::Boolean get_allowAsPrime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSTATE_GET_ALLOWASPRIME_OFFSET))(this);
		}

		::System::Void OnValidate(::NodeCanvas::Framework::Graph* assignedGraph)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSTATE_ONVALIDATE_OFFSET))(this, assignedGraph);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSTATE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSTATE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void OnGraphPaused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSTATE_ONGRAPHPAUSED_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IUpdatable_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSTATE_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET))(this);
		}
	};
}
