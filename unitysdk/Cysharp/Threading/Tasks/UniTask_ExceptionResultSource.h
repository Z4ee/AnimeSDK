#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }

#define CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C519440)
#define CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1C519310)
#define CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C5193D0)
#define CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C5193F0)
#define CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C5193E0)
#define CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5192F0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_ExceptionResultSource_TypeDefinitionIndex = 28595;

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
