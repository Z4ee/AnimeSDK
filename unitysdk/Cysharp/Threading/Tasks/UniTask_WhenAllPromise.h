#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1EA84C30)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1EA84CE0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1EA84DE0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_TRYINVOKECONTINUATION_OFFSET UNITYSDK_OFFSET(0x1EA84AF0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1EA84D90)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7C4F0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WhenAllPromise_TypeDefinitionIndex = 42711;

	class UniTask_WhenAllPromise : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> core; // 0x10
		::System::Int32 tasksLength; // 0x30
		::System::Int32 completeCount; // 0x34

		::System::Void _ctor(::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Cysharp::Threading::Tasks::UniTask>*, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void TryInvokeContinuation(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise* a1, ::Cysharp::Threading::Tasks::UniTask_Awaiter& a2)
		{
			return ((::System::Void(*)(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise*, ::Cysharp::Threading::Tasks::UniTask_Awaiter&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_TRYINVOKECONTINUATION_OFFSET))(a1, a2);
		}

		::System::Void GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}
	};
}
