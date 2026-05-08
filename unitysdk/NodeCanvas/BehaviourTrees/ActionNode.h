#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTNode.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class ActionTask; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Task; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_ACTIONNODE_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1B0B5AC0)
#define NODECANVAS_BEHAVIOURTREES_ACTIONNODE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B0B5AE0)
#define NODECANVAS_BEHAVIOURTREES_ACTIONNODE_GET_TASK_OFFSET UNITYSDK_OFFSET(0x1B0B5A40)
#define NODECANVAS_BEHAVIOURTREES_ACTIONNODE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B0B5B10)
#define NODECANVAS_BEHAVIOURTREES_ACTIONNODE_ONGRAPHPAUSED_OFFSET UNITYSDK_OFFSET(0x1B0B5B70)
#define NODECANVAS_BEHAVIOURTREES_ACTIONNODE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1B0B5B40)
#define NODECANVAS_BEHAVIOURTREES_ACTIONNODE_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x1B0B5AD0)
#define NODECANVAS_BEHAVIOURTREES_ACTIONNODE_SET_TASK_OFFSET UNITYSDK_OFFSET(0x1B0B5A50)
#define NODECANVAS_BEHAVIOURTREES_ACTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B5BA0)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int ActionNode_TypeDefinitionIndex = 27540;

	class ActionNode : public ::NodeCanvas::BehaviourTrees::BTNode
	{
	public:
		::NodeCanvas::Framework::ActionTask* _action; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_ACTIONNODE__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::Task* get_task()
		{
			return ((::NodeCanvas::Framework::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_ACTIONNODE_GET_TASK_OFFSET))(this);
		}

		::System::Void set_task(::NodeCanvas::Framework::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Task*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_ACTIONNODE_SET_TASK_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::ActionTask* get_action()
		{
			return ((::NodeCanvas::Framework::ActionTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_ACTIONNODE_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_action(::NodeCanvas::Framework::ActionTask* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ActionTask*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_ACTIONNODE_SET_ACTION_OFFSET))(this, value);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_ACTIONNODE_GET_NAME_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_ACTIONNODE_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_ACTIONNODE_ONRESET_OFFSET))(this);
		}

		::System::Void OnGraphPaused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_ACTIONNODE_ONGRAPHPAUSED_OFFSET))(this);
		}
	};
}
