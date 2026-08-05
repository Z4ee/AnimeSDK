#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/DialogueTrees/DTNode.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class ActionTask; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Task; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Component; }

#define NODECANVAS_DIALOGUETREES_ACTIONNODE_GET_ACTION_OFFSET UNITYSDK_OFFSET(0x1EB82C80)
#define NODECANVAS_DIALOGUETREES_ACTIONNODE_GET_REQUIREACTORSELECTION_OFFSET UNITYSDK_OFFSET(0x1EB82D20)
#define NODECANVAS_DIALOGUETREES_ACTIONNODE_GET_TASK_OFFSET UNITYSDK_OFFSET(0x1EB82CA0)
#define NODECANVAS_DIALOGUETREES_ACTIONNODE_ONACTIONEND_OFFSET UNITYSDK_OFFSET(0x1EB82EF0)
#define NODECANVAS_DIALOGUETREES_ACTIONNODE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EB82D30)
#define NODECANVAS_DIALOGUETREES_ACTIONNODE_ONGRAPHPAUSED_OFFSET UNITYSDK_OFFSET(0x1EB831B0)
#define NODECANVAS_DIALOGUETREES_ACTIONNODE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EB83170)
#define NODECANVAS_DIALOGUETREES_ACTIONNODE_SET_ACTION_OFFSET UNITYSDK_OFFSET(0x1EB82C90)
#define NODECANVAS_DIALOGUETREES_ACTIONNODE_SET_TASK_OFFSET UNITYSDK_OFFSET(0x1EB82CB0)
#define NODECANVAS_DIALOGUETREES_ACTIONNODE_UPDATEACTION_OFFSET UNITYSDK_OFFSET(0x1EB82EA0)
#define NODECANVAS_DIALOGUETREES_ACTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB831E0)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int ActionNode_TypeDefinitionIndex = 31112;

	class ActionNode : public ::NodeCanvas::DialogueTrees::DTNode
	{
	public:
		::NodeCanvas::Framework::ActionTask* _action; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_ACTIONNODE__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::ActionTask* get_action()
		{
			return ((::NodeCanvas::Framework::ActionTask*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_ACTIONNODE_GET_ACTION_OFFSET))(this);
		}

		::System::Void set_action(::NodeCanvas::Framework::ActionTask* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::ActionTask*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_ACTIONNODE_SET_ACTION_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Task* get_task()
		{
			return ((::NodeCanvas::Framework::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_ACTIONNODE_GET_TASK_OFFSET))(this);
		}

		::System::Void set_task(::NodeCanvas::Framework::Task* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Task*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_ACTIONNODE_SET_TASK_OFFSET))(this, value);
		}

		::System::Boolean get_requireActorSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_ACTIONNODE_GET_REQUIREACTORSELECTION_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* bb)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_ACTIONNODE_ONEXECUTE_OFFSET))(this, agent, bb);
		}

		::System::Collections::IEnumerator* UpdateAction(::UnityEngine::Component* actionAgent)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_ACTIONNODE_UPDATEACTION_OFFSET))(this, actionAgent);
		}

		::System::Void OnActionEnd(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_ACTIONNODE_ONACTIONEND_OFFSET))(this, success);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_ACTIONNODE_ONRESET_OFFSET))(this);
		}

		::System::Void OnGraphPaused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_ACTIONNODE_ONGRAPHPAUSED_OFFSET))(this);
		}
	};
}
