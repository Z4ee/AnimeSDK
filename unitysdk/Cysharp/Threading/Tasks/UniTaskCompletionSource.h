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

#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1C37DEB0)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C37DF90)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_GET_TASK_OFFSET UNITYSDK_OFFSET(0x1C37DAE0)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_MARKHANDLED_OFFSET UNITYSDK_OFFSET(0x1C37DAD0)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C37DFB0)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_TRYSETCANCELED_OFFSET UNITYSDK_OFFSET(0x1C37DDD0)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_TRYSETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1C37DDF0)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_TRYSETRESULT_OFFSET UNITYSDK_OFFSET(0x1C37C300)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_TRYSIGNALCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1C37DAF0)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C37DFA0)
#define CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C37DAC0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskCompletionSource_TypeDefinitionIndex = 28632;

	class UniTaskCompletionSource : public ::System::Object
	{
	public:
		::System::Object* singleState; // 0x10
		::Cysharp::Threading::Tasks::ExceptionHolder* exception; // 0x18
		::System::Object* gate; // 0x20
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Action_1<::System::Object*>*, ::System::Object*>>* secondaryContinuationList; // 0x28
		::System::Threading::CancellationToken cancellationToken; // 0x30
		::System::Action_1<::System::Object*>* singleContinuation; // 0x38
		::System::Boolean handled; // 0x40
		::System::Int32 intStatus; // 0x44

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

		::System::Boolean TrySetCanceled(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_TRYSETCANCELED_OFFSET))(this, cancellationToken);
		}

		::System::Boolean TrySetException(::System::Exception* exception)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_TRYSETEXCEPTION_OFFSET))(this, exception);
		}

		::System::Void GetResult(::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_GETRESULT_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 token)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_GETSTATUS_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_ONCOMPLETED_OFFSET))(this, continuation, state, token);
		}

		::System::Boolean TrySignalCompletion(::Cysharp::Threading::Tasks::UniTaskStatus status)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTaskStatus))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKCOMPLETIONSOURCE_TRYSIGNALCOMPLETION_OFFSET))(this, status);
		}
	};
}
