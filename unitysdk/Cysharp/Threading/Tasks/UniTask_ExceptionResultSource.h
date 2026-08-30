#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }

#define CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1CE0F450)
#define CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1CE0F380)
#define CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1CE0F400)
#define CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CE0F420)
#define CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1CE0F410)
#define CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE08B50)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_ExceptionResultSource_TypeDefinitionIndex = 42658;

	class UniTask_ExceptionResultSource : public ::System::Object
	{
	public:
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exception; // 0x10
		::System::Boolean calledGet; // 0x18

		::System::Void _ctor(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE__CTOR_OFFSET))(this, a1);
		}

		::System::Void GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_EXCEPTIONRESULTSOURCE_FINALIZE_OFFSET))(this);
		}
	};
}
