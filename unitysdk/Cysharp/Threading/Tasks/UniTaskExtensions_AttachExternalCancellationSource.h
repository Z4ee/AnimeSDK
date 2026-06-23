#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATIONSOURCE_CANCELLATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1E8444F0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATIONSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1E844550)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATIONSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1E844560)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATIONSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1E844630)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATIONSOURCE_RUNTASK_OFFSET UNITYSDK_OFFSET(0x1E8444A0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATIONSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1E844650)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATIONSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8446C0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATIONSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E844390)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions_AttachExternalCancellationSource_TypeDefinitionIndex = 31291;

	class UniTaskExtensions_AttachExternalCancellationSource : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_cancellationCallbackDelegate()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskExtensions_AttachExternalCancellationSource_TypeDefinitionIndex)->GetStaticField(0x25BC0);
		}
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::System::Threading::CancellationTokenRegistration tokenRegistration; // 0x18
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> core; // 0x30

		::System::Void _ctor(::Cysharp::Threading::Tasks::UniTask task, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTask, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATIONSOURCE__CTOR_OFFSET))(this, task, cancellationToken);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATIONSOURCE__CCTOR_OFFSET))();
		}

		::Cysharp::Threading::Tasks::UniTaskVoid RunTask(::Cysharp::Threading::Tasks::UniTask task)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATIONSOURCE_RUNTASK_OFFSET))(this, task);
		}

		static ::System::Void CancellationCallback(::System::Object* state)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATIONSOURCE_CANCELLATIONCALLBACK_OFFSET))(state);
		}

		::System::Void GetResult(::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATIONSOURCE_GETRESULT_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 token)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATIONSOURCE_GETSTATUS_OFFSET))(this, token);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATIONSOURCE_ONCOMPLETED_OFFSET))(this, continuation, state, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_ATTACHEXTERNALCANCELLATIONSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}
	};
}
