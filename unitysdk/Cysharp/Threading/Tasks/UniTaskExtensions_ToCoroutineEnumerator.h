#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F155620)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F155630)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINEENUMERATOR_RUNTASK_OFFSET UNITYSDK_OFFSET(0x1F1555D0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINEENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F1556A0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINEENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F151C20)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions_ToCoroutineEnumerator_TypeDefinitionIndex = 38406;

	class UniTaskExtensions_ToCoroutineEnumerator : public ::System::Object
	{
	public:
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exception; // 0x10
		::Cysharp::Threading::Tasks::UniTask task; // 0x18
		::System::Action_1<::System::Exception*>* exceptionHandler; // 0x28
		::System::Boolean isStarted; // 0x30
		::System::Boolean completed; // 0x31

		::System::Void _ctor(::Cysharp::Threading::Tasks::UniTask a1, ::System::Action_1<::System::Exception*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTask, ::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINEENUMERATOR__CTOR_OFFSET))(this, a1, a2);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid RunTask(::Cysharp::Threading::Tasks::UniTask a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINEENUMERATOR_RUNTASK_OFFSET))(this, a1);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINEENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINEENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS_TOCOROUTINEENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
