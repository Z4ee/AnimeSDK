#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }

#define CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E84D250)
#define CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1E84D120)
#define CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1E84D1E0)
#define CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1E84D200)
#define CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1E84D1F0)
#define CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E84D100)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_ExceptionResultSource_TypeDefinitionIndex = 31250;

	class UniTask_ExceptionResultSource : public ::System::Object
	{
	public:
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exception; // 0x10
		::System::Boolean calledGet; // 0x18

		::System::Void _ctor(::System::Exception* exception)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE__CTOR_OFFSET))(this, exception);
		}

		::System::Void GetResult(::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_GETRESULT_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 token)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_GETSTATUS_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_ONCOMPLETED_OFFSET))(this, continuation, state, token);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_FINALIZE_OFFSET))(this);
		}
	};
}
