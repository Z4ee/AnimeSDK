#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTDecorator.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class ConditionTask; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Task; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_WAITUNTIL_GET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1D06A7E0)
#define NODECANVAS_BEHAVIOURTREES_WAITUNTIL_GET_TASK_OFFSET UNITYSDK_OFFSET(0x1D06A760)
#define NODECANVAS_BEHAVIOURTREES_WAITUNTIL_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D06A800)
#define NODECANVAS_BEHAVIOURTREES_WAITUNTIL_ONRESET_OFFSET UNITYSDK_OFFSET(0x1D06AC70)
#define NODECANVAS_BEHAVIOURTREES_WAITUNTIL_SET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1D06A7F0)
#define NODECANVAS_BEHAVIOURTREES_WAITUNTIL_SET_TASK_OFFSET UNITYSDK_OFFSET(0x1D06A770)
#define NODECANVAS_BEHAVIOURTREES_WAITUNTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06ACC0)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int WaitUntil_TypeDefinitionIndex = 31474;

	class WaitUntil : public ::NodeCanvas::BehaviourTrees::BTDecorator
	{
	public:
		::NodeCanvas::Framework::ConditionTask* _condition; // 0x78
		::System::Boolean accessed; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_WAITUNTIL__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::Task* get_task()
		{
			return ((::NodeCanvas::Framework::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_WAITUNTIL_GET_TASK_OFFSET))(this);
		}

		::System::Void set_task(::NodeCanvas::Framework::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Task*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_WAITUNTIL_SET_TASK_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::ConditionTask* get_condition()
		{
			return ((::NodeCanvas::Framework::ConditionTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_WAITUNTIL_GET_CONDITION_OFFSET))(this);
		}

		::System::Void set_condition(::NodeCanvas::Framework::ConditionTask* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ConditionTask*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_WAITUNTIL_SET_CONDITION_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_WAITUNTIL_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_WAITUNTIL_ONRESET_OFFSET))(this);
		}
	};
}
