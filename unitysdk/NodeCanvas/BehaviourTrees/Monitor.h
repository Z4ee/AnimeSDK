#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTDecorator.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/Monitor_MonitorMode.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/Monitor_ReturnStatusMode.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class ActionTask; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Task; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_MONITOR_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1D804380)
#define NODECANVAS_BEHAVIOURTREES_MONITOR_GET_TASK_OFFSET UNITYSDK_OFFSET(0x1D8043A0)
#define NODECANVAS_BEHAVIOURTREES_MONITOR_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D804420)
#define NODECANVAS_BEHAVIOURTREES_MONITOR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1D8045D0)
#define NODECANVAS_BEHAVIOURTREES_MONITOR_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x1D804390)
#define NODECANVAS_BEHAVIOURTREES_MONITOR_SET_TASK_OFFSET UNITYSDK_OFFSET(0x1D8043B0)
#define NODECANVAS_BEHAVIOURTREES_MONITOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D804620)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Monitor_TypeDefinitionIndex = 30105;

	class Monitor : public ::NodeCanvas::BehaviourTrees::BTDecorator
	{
	public:
		::NodeCanvas::Framework::ActionTask* _action; // 0x78
		::NodeCanvas::BehaviourTrees::Monitor_MonitorMode monitorMode; // 0x80
		::NodeCanvas::BehaviourTrees::Monitor_ReturnStatusMode returnMode; // 0x84
		::NodeCanvas::Framework::Status decoratorActionStatus; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_MONITOR__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::ActionTask* get_action()
		{
			return ((::NodeCanvas::Framework::ActionTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_MONITOR_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_action(::NodeCanvas::Framework::ActionTask* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ActionTask*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_MONITOR_SET_ACTION_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Task* get_task()
		{
			return ((::NodeCanvas::Framework::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_MONITOR_GET_TASK_OFFSET))(this);
		}

		::System::Void set_task(::NodeCanvas::Framework::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Task*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_MONITOR_SET_TASK_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_MONITOR_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_MONITOR_ONRESET_OFFSET))(this);
		}
	};
}
