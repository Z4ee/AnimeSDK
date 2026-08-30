#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_ASYNCUNITSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1EA7F210)
#define CYSHARP_THREADING_TASKS_UNITASK_ASYNCUNITSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1EA7ED30)
#define CYSHARP_THREADING_TASKS_UNITASK_ASYNCUNITSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1EA7EE70)
#define CYSHARP_THREADING_TASKS_UNITASK_ASYNCUNITSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1EA7EFA0)
#define CYSHARP_THREADING_TASKS_UNITASK_ASYNCUNITSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1EA7F0E0)
#define CYSHARP_THREADING_TASKS_UNITASK_ASYNCUNITSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7D810)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_AsyncUnitSource_TypeDefinitionIndex = 42747;

	class UniTask_AsyncUnitSource : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskSource* source; // 0x10

		::System::Void _ctor(::Cysharp::Threading::Tasks::IUniTaskSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::IUniTaskSource*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ASYNCUNITSOURCE__CTOR_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::AsyncUnit GetResult(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::AsyncUnit(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ASYNCUNITSOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ASYNCUNITSOURCE_GETSTATUS_OFFSET))(this, a1);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ASYNCUNITSOURCE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ASYNCUNITSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_ASYNCUNITSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET))(this, a1);
		}
	};
}
