#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }

#define CYSHARP_THREADING_TASKS_UNITASK_MEMOIZESOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1EA822F0)
#define CYSHARP_THREADING_TASKS_UNITASK_MEMOIZESOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1EA82540)
#define CYSHARP_THREADING_TASKS_UNITASK_MEMOIZESOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1EA82670)
#define CYSHARP_THREADING_TASKS_UNITASK_MEMOIZESOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1EA827D0)
#define CYSHARP_THREADING_TASKS_UNITASK_MEMOIZESOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7D540)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_MemoizeSource_TypeDefinitionIndex = 42749;

	class UniTask_MemoizeSource : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskSource* source; // 0x10
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exception; // 0x18
		::Cysharp::Threading::Tasks::UniTaskStatus status; // 0x20

		::System::Void _ctor(::Cysharp::Threading::Tasks::IUniTaskSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::IUniTaskSource*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_MEMOIZESOURCE__CTOR_OFFSET))(this, a1);
		}

		::System::Void GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_MEMOIZESOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_MEMOIZESOURCE_GETSTATUS_OFFSET))(this, a1);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_MEMOIZESOURCE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_MEMOIZESOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}
	};
}
