#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1C37D8F0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C37D960)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C37DAA0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_TRYINVOKECONTINUATION_OFFSET UNITYSDK_OFFSET(0x1C37D6D0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C37DA30)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C37D2C0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WhenAllPromise_TypeDefinitionIndex = 28605;

	class UniTask_WhenAllPromise : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> core; // 0x10
		::System::Int32 completeCount; // 0x30
		::System::Int32 tasksLength; // 0x34

		::System::Void _ctor(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>* tasks, ::System::Int32 tasksLength)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>*, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE__CTOR_OFFSET))(this, tasks, tasksLength);
		}

		static ::System::Void TryInvokeContinuation(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise* self, ::Cysharp::Threading::Tasks::UniTask_Awaiter& awaiter)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise*, ::Cysharp::Threading::Tasks::UniTask_Awaiter&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_TRYINVOKECONTINUATION_OFFSET))(self, awaiter);
		}

		::System::Void GetResult(::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_GETRESULT_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 token)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_GETSTATUS_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_ONCOMPLETED_OFFSET))(this, continuation, state, token);
		}
	};
}
