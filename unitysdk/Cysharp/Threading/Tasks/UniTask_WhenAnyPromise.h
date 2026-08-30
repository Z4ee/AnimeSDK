#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1CE13100)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1CE12F30)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1CE12FE0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CE13090)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_TRYINVOKECONTINUATION_OFFSET UNITYSDK_OFFSET(0x1CE12DF0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1CE130B0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE0A9A0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WhenAnyPromise_TypeDefinitionIndex = 42745;

	class UniTask_WhenAnyPromise : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Int32> core; // 0x10
		::System::Int32 completedCount; // 0x38

		::System::Void _ctor(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>*, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void TryInvokeContinuation(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise* a1, ::Cysharp::Threading::Tasks::UniTask_Awaiter& a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise*, ::Cysharp::Threading::Tasks::UniTask_Awaiter&, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_TRYINVOKECONTINUATION_OFFSET))(a1, a2, a3);
		}

		::System::Int32 GetResult(::System::Int16 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_GETSTATUS_OFFSET))(this, a1);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENANYPROMISE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET))(this, a1);
		}
	};
}
