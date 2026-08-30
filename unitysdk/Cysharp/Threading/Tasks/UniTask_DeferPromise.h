#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_DEFERPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1CE0D7E0)
#define CYSHARP_THREADING_TASKS_UNITASK_DEFERPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1CE0D7F0)
#define CYSHARP_THREADING_TASKS_UNITASK_DEFERPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CE0D840)
#define CYSHARP_THREADING_TASKS_UNITASK_DEFERPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1CE0D850)
#define CYSHARP_THREADING_TASKS_UNITASK_DEFERPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE09040)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_DeferPromise_TypeDefinitionIndex = 42662;

	class UniTask_DeferPromise : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::UniTask task; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter awaiter; // 0x20
		::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* factory; // 0x30

		::System::Void _ctor(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DEFERPROMISE__CTOR_OFFSET))(this, a1);
		}

		::System::Void GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DEFERPROMISE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DEFERPROMISE_GETSTATUS_OFFSET))(this, a1);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DEFERPROMISE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DEFERPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}
	};
}
