#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }

#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CANCELLATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D7449D0)
#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CYSHARP_THREADING_TASKS_IASYNCCLICKEVENTHANDLER_ONCLICKASYNC_OFFSET UNITYSDK_OFFSET(0x1D744AD0)
#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1D744B30)
#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1D744BF0)
#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1D744CF0)
#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1D744CA0)
#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D744A80)
#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D744920)
#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_ONINVOKEASYNC_OFFSET UNITYSDK_OFFSET(0x1D7448B0)
#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D744D10)
#define CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7445C0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AsyncUnityEventHandler_TypeDefinitionIndex = 42896;

	class AsyncUnityEventHandler : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_cancellationCallback()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AsyncUnityEventHandler_TypeDefinitionIndex)->GetStaticField(0x618F0);
		}
		::UnityEngine::Events::UnityAction* action; // 0x10
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> core; // 0x18
		::System::Threading::CancellationTokenRegistration registration; // 0x38
		::UnityEngine::Events::UnityEvent* unityEvent; // 0x50
		::System::Threading::CancellationToken cancellationToken; // 0x58
		::System::Boolean callOnce; // 0x60
		::System::Boolean isDisposed; // 0x61

		::System::Void _ctor(::UnityEngine::Events::UnityEvent* a1, ::System::Threading::CancellationToken a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityEvent*, ::System::Threading::CancellationToken, ::System::Boolean))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER__CCTOR_OFFSET))();
		}

		::Cysharp::Threading::Tasks::UniTask OnInvokeAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_ONINVOKEASYNC_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_INVOKE_OFFSET))(this);
		}

		static ::System::Void CancellationCallback(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CANCELLATIONCALLBACK_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_DISPOSE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask Cysharp_Threading_Tasks_IAsyncClickEventHandler_OnClickAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CYSHARP_THREADING_TASKS_IASYNCCLICKEVENTHANDLER_ONCLICKASYNC_OFFSET))(this);
		}

		::System::Void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus Cysharp_Threading_Tasks_IUniTaskSource_GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus Cysharp_Threading_Tasks_IUniTaskSource_UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void Cysharp_Threading_Tasks_IUniTaskSource_OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCUNITYEVENTHANDLER_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}
	};
}
