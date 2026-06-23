#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"
#include "unitysdk/NodeCanvas/Framework/Task.h"
#include "unitysdk/System/Nullable_1.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Component; }

#define NODECANVAS_FRAMEWORK_ACTIONTASK_ENDACTION_1_OFFSET UNITYSDK_OFFSET(0x1BC5D7D0)
#define NODECANVAS_FRAMEWORK_ACTIONTASK_ENDACTION_2_OFFSET UNITYSDK_OFFSET(0x1BC5D800)
#define NODECANVAS_FRAMEWORK_ACTIONTASK_ENDACTION_OFFSET UNITYSDK_OFFSET(0x1BC5D7A0)
#define NODECANVAS_FRAMEWORK_ACTIONTASK_EXECUTEACTION_OFFSET UNITYSDK_OFFSET(0x1BC5D5E0)
#define NODECANVAS_FRAMEWORK_ACTIONTASK_EXECUTEINDEPENDENT_OFFSET UNITYSDK_OFFSET(0x1BC5D480)
#define NODECANVAS_FRAMEWORK_ACTIONTASK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1BC5D5F0)
#define NODECANVAS_FRAMEWORK_ACTIONTASK_GET_ELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x1BC5D350)
#define NODECANVAS_FRAMEWORK_ACTIONTASK_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1BC5D460)
#define NODECANVAS_FRAMEWORK_ACTIONTASK_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x1BC5D450)
#define NODECANVAS_FRAMEWORK_ACTIONTASK_INDEPENDENTACTIONUPDATER_OFFSET UNITYSDK_OFFSET(0x1BC5D580)
#define NODECANVAS_FRAMEWORK_ACTIONTASK_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1BC5D860)
#define NODECANVAS_FRAMEWORK_ACTIONTASK_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x1BC5D8A0)
#define NODECANVAS_FRAMEWORK_ACTIONTASK_ONRESUME_OFFSET UNITYSDK_OFFSET(0x1BC5D8B0)
#define NODECANVAS_FRAMEWORK_ACTIONTASK_ONSTOP_1_OFFSET UNITYSDK_OFFSET(0x1BC5D890)
#define NODECANVAS_FRAMEWORK_ACTIONTASK_ONSTOP_OFFSET UNITYSDK_OFFSET(0x1BC5D880)
#define NODECANVAS_FRAMEWORK_ACTIONTASK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BC5D870)
#define NODECANVAS_FRAMEWORK_ACTIONTASK_PAUSE_OFFSET UNITYSDK_OFFSET(0x1BC5D840)
#define NODECANVAS_FRAMEWORK_ACTIONTASK_SET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1BC5D470)
#define NODECANVAS_FRAMEWORK_ACTIONTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC5D8C0)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int ActionTask_TypeDefinitionIndex = 30721;

	class ActionTask : public ::NodeCanvas::Framework::Task
	{
	public:
		::NodeCanvas::Framework::Status status; // 0x50
		::System::Single timeStarted; // 0x54
		::System::Boolean _isPaused_k__BackingField; // 0x58
		::System::Boolean latch; // 0x59

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK__CTOR_OFFSET))(this);
		}

		::System::Single get_elapsedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK_GET_ELAPSEDTIME_OFFSET))(this);
		}

		::System::Boolean get_isRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Boolean get_isPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Void set_isPaused(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK_SET_ISPAUSED_OFFSET))(this, value);
		}

		::System::Void ExecuteIndependent(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard, ::System::Action_1<::NodeCanvas::Framework::Status>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*, ::System::Action_1<::NodeCanvas::Framework::Status>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK_EXECUTEINDEPENDENT_OFFSET))(this, agent, blackboard, callback);
		}

		::System::Collections::IEnumerator* IndependentActionUpdater(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard, ::System::Action_1<::NodeCanvas::Framework::Status>* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*, ::System::Action_1<::NodeCanvas::Framework::Status>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK_INDEPENDENTACTIONUPDATER_OFFSET))(this, agent, blackboard, callback);
		}

		::NodeCanvas::Framework::Status ExecuteAction(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK_EXECUTEACTION_OFFSET))(this, agent, blackboard);
		}

		::NodeCanvas::Framework::Status Execute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK_EXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void EndAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK_ENDACTION_OFFSET))(this);
		}

		::System::Void EndAction_1(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK_ENDACTION_1_OFFSET))(this, success);
		}

		::System::Void EndAction_2(::System::Nullable_1<::System::Boolean> success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK_ENDACTION_2_OFFSET))(this, success);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK_PAUSE_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnStop(::System::Boolean interrupted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK_ONSTOP_OFFSET))(this, interrupted);
		}

		::System::Void OnStop_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK_ONSTOP_1_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnResume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_ACTIONTASK_ONRESUME_OFFSET))(this);
		}
	};
}
