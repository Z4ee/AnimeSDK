#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1C4D53D0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1C4D5200)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C4D5270)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C4D5340)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_TRYINVOKECONTINUATION_OFFSET UNITYSDK_OFFSET(0x1C4D4FD0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C4D5360)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4D4C40)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WhenAnyPromise_TypeDefinitionIndex = 28607;

	class UniTask_WhenAnyPromise : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Int32> core; // 0x10
		::System::Int32 completedCount; // 0x38

		::System::Void _ctor(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>* tasks, ::System::Int32 tasksLength)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>*, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE__CTOR_OFFSET))(this, tasks, tasksLength);
		}

		static ::System::Void TryInvokeContinuation(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise* self, ::Cysharp::Threading::Tasks::UniTask_Awaiter& awaiter, ::System::Int32 i)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise*, ::Cysharp::Threading::Tasks::UniTask_Awaiter&, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_TRYINVOKECONTINUATION_OFFSET))(self, awaiter, i);
		}

		::System::Int32 GetResult(::System::Int16 token)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_GETRESULT_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 token)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_GETSTATUS_OFFSET))(this, token);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_ONCOMPLETED_OFFSET))(this, continuation, state, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET))(this, token);
		}
	};
}
