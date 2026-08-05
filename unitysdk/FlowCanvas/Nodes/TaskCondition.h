#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace NodeCanvas::Framework { class ConditionTask; }
namespace NodeCanvas::Framework { class Task; }
namespace System { class String; }

#define FLOWCANVAS_NODES_TASKCONDITION_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1DFCB890)
#define FLOWCANVAS_NODES_TASKCONDITION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DFCB830)
#define FLOWCANVAS_NODES_TASKCONDITION_NODECANVAS_FRAMEWORK_ITASKASSIGNABLE_GET_TASK_OFFSET UNITYSDK_OFFSET(0x1DFCB8B0)
#define FLOWCANVAS_NODES_TASKCONDITION_NODECANVAS_FRAMEWORK_ITASKASSIGNABLE_SET_TASK_OFFSET UNITYSDK_OFFSET(0x1DFCB8C0)
#define FLOWCANVAS_NODES_TASKCONDITION_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1DFCB930)
#define FLOWCANVAS_NODES_TASKCONDITION_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1DFCB9B0)
#define FLOWCANVAS_NODES_TASKCONDITION_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1DFCB9F0)
#define FLOWCANVAS_NODES_TASKCONDITION_SET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1DFCB8A0)
#define FLOWCANVAS_NODES_TASKCONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFCBA60)
#define FLOWCANVAS_NODES_TASKCONDITION__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0x1DFCBAA0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TaskCondition_TypeDefinitionIndex = 29973;

	class TaskCondition : public ::FlowCanvas::FlowNode
	{
	public:
		::NodeCanvas::Framework::ConditionTask* _condition; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKCONDITION__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKCONDITION_GET_NAME_OFFSET))(this);
		}

		::NodeCanvas::Framework::ConditionTask* get_condition()
		{
			return ((::NodeCanvas::Framework::ConditionTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKCONDITION_GET_CONDITION_OFFSET))(this);
		}

		::System::Void set_condition(::NodeCanvas::Framework::ConditionTask* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ConditionTask*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKCONDITION_SET_CONDITION_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Task* NodeCanvas_Framework_ITaskAssignable_get_task()
		{
			return ((::NodeCanvas::Framework::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKCONDITION_NODECANVAS_FRAMEWORK_ITASKASSIGNABLE_GET_TASK_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_ITaskAssignable_set_task(::NodeCanvas::Framework::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Task*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKCONDITION_NODECANVAS_FRAMEWORK_ITASKASSIGNABLE_SET_TASK_OFFSET))(this, value);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKCONDITION_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKCONDITION_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKCONDITION_REGISTERPORTS_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__11_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKCONDITION__REGISTERPORTS_B__11_0_OFFSET))(this);
		}
	};
}
