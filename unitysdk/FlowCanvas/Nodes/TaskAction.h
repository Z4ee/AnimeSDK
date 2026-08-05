#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"

namespace FlowCanvas { class FlowOutput; }
namespace NodeCanvas::Framework { class ActionTask; }
namespace NodeCanvas::Framework { class Task; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define FLOWCANVAS_NODES_TASKACTION_DOUPDATE_OFFSET UNITYSDK_OFFSET(0x1DAD7DF0)
#define FLOWCANVAS_NODES_TASKACTION_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1DAD7B90)
#define FLOWCANVAS_NODES_TASKACTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DAD7B30)
#define FLOWCANVAS_NODES_TASKACTION_NODECANVAS_FRAMEWORK_ITASKASSIGNABLE_GET_TASK_OFFSET UNITYSDK_OFFSET(0x1DAD7BC0)
#define FLOWCANVAS_NODES_TASKACTION_NODECANVAS_FRAMEWORK_ITASKASSIGNABLE_SET_TASK_OFFSET UNITYSDK_OFFSET(0x1DAD7BD0)
#define FLOWCANVAS_NODES_TASKACTION_ONGRAPHPAUSED_OFFSET UNITYSDK_OFFSET(0x1DAD7CE0)
#define FLOWCANVAS_NODES_TASKACTION_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1DAD7C60)
#define FLOWCANVAS_NODES_TASKACTION_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1DAD7C70)
#define FLOWCANVAS_NODES_TASKACTION_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1DAD7D10)
#define FLOWCANVAS_NODES_TASKACTION_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x1DAD7BA0)
#define FLOWCANVAS_NODES_TASKACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD7E50)
#define FLOWCANVAS_NODES_TASKACTION__REGISTERPORTS_B__14_0_OFFSET UNITYSDK_OFFSET(0x1DAD7E90)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int TaskAction_TypeDefinitionIndex = 31149;

	class TaskAction : public ::FlowCanvas::FlowNode
	{
	public:
		::NodeCanvas::Framework::ActionTask* _action; // 0xA8
		::FlowCanvas::FlowOutput* onFinish; // 0xB0
		::UnityEngine::Coroutine* coroutine; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKACTION__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKACTION_GET_NAME_OFFSET))(this);
		}

		::NodeCanvas::Framework::ActionTask* get_action()
		{
			return ((::NodeCanvas::Framework::ActionTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKACTION_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_action(::NodeCanvas::Framework::ActionTask* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ActionTask*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKACTION_SET_ACTION_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Task* NodeCanvas_Framework_ITaskAssignable_get_task()
		{
			return ((::NodeCanvas::Framework::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKACTION_NODECANVAS_FRAMEWORK_ITASKASSIGNABLE_GET_TASK_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_ITaskAssignable_set_task(::NodeCanvas::Framework::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Task*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKACTION_NODECANVAS_FRAMEWORK_ITASKASSIGNABLE_SET_TASK_OFFSET))(this, value);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKACTION_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKACTION_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void OnGraphPaused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKACTION_ONGRAPHPAUSED_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKACTION_REGISTERPORTS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DoUpdate(::FlowCanvas::Flow f)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKACTION_DOUPDATE_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__14_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_TASKACTION__REGISTERPORTS_B__14_0_OFFSET))(this, f);
		}
	};
}
