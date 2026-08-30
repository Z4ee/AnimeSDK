#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Cysharp::Threading::Tasks { class ExceptionHolder; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1EA86200)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1EA862E0)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_GET_TASK_OFFSET UNITYSDK_OFFSET(0x1EA85DD0)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_MARKHANDLED_OFFSET UNITYSDK_OFFSET(0x1EA85DC0)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1EA86300)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_TRYSETCANCELED_OFFSET UNITYSDK_OFFSET(0x1EA860D0)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_TRYSETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EA860F0)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_TRYSETRESULT_OFFSET UNITYSDK_OFFSET(0x1EA85DE0)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_TRYSIGNALCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1EA85DF0)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1EA862F0)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA85DB0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskCompletionSource_TypeDefinitionIndex = 42814;

	class UniTaskCompletionSource : public ::System::Object
	{
	public:
		::System::Object* gate; // 0x10
		::Cysharp::Threading::Tasks::ExceptionHolder* exception; // 0x18
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action_1<::System::Object*>*, ::System::Object*>>* secondaryContinuationList; // 0x20
		::System::Threading::CancellationToken cancellationToken; // 0x28
		::System::Action_1<::System::Object*>* singleContinuation; // 0x30
		::System::Object* singleState; // 0x38
		::System::Int32 intStatus; // 0x40
		::System::Boolean handled; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE__CTOR_OFFSET))(this);
		}

		::System::Void MarkHandled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_MARKHANDLED_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask get_Task()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_GET_TASK_OFFSET))(this);
		}

		::System::Boolean TrySetResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_TRYSETRESULT_OFFSET))(this);
		}

		::System::Boolean TrySetCanceled(::System::Threading::CancellationToken a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_TRYSETCANCELED_OFFSET))(this, a1);
		}

		::System::Boolean TrySetException(::System::Exception* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_TRYSETEXCEPTION_OFFSET))(this, a1);
		}

		::System::Void GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TrySignalCompletion(::Cysharp::Threading::Tasks::UniTaskStatus a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTaskStatus))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_TRYSIGNALCOMPLETION_OFFSET))(this, a1);
		}
	};
}
