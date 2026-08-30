#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CYSHARP_THREADING_TASKS_ASYNCLAZY_ENSUREINITIALIZEDCORE_OFFSET UNITYSDK_OFFSET(0x1D744170)
#define CYSHARP_THREADING_TASKS_ASYNCLAZY_ENSUREINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1D744110)
#define CYSHARP_THREADING_TASKS_ASYNCLAZY_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x1D744120)
#define CYSHARP_THREADING_TASKS_ASYNCLAZY_GET_TASK_OFFSET UNITYSDK_OFFSET(0x1D7440C0)
#define CYSHARP_THREADING_TASKS_ASYNCLAZY_SETCOMPLETIONSOURCE_1_OFFSET UNITYSDK_OFFSET(0x1D744370)
#define CYSHARP_THREADING_TASKS_ASYNCLAZY_SETCOMPLETIONSOURCE_OFFSET UNITYSDK_OFFSET(0x1D744020)
#define CYSHARP_THREADING_TASKS_ASYNCLAZY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D7444D0)
#define CYSHARP_THREADING_TASKS_ASYNCLAZY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D743EF0)
#define CYSHARP_THREADING_TASKS_ASYNCLAZY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D743E90)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int AsyncLazy_TypeDefinitionIndex = 42531;

	class AsyncLazy : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_continuation()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AsyncLazy_TypeDefinitionIndex)->GetStaticField(0x618E0);
		}
		::Cysharp::Threading::Tasks::UniTask_Awaiter awaiter; // 0x10
		::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* taskFactory; // 0x20
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* completionSource; // 0x28
		::System::Object* syncLock; // 0x30
		::System::Boolean initialized; // 0x38

		::System::Void _ctor(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCLAZY__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Cysharp::Threading::Tasks::UniTask a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTask))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCLAZY__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCLAZY__CCTOR_OFFSET))();
		}

		::Cysharp::Threading::Tasks::UniTask get_Task()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCLAZY_GET_TASK_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_Awaiter GetAwaiter()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_Awaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCLAZY_GETAWAITER_OFFSET))(this);
		}

		::System::Void EnsureInitialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCLAZY_ENSUREINITIALIZED_OFFSET))(this);
		}

		::System::Void EnsureInitializedCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCLAZY_ENSUREINITIALIZEDCORE_OFFSET))(this);
		}

		::System::Void SetCompletionSource(::Cysharp::Threading::Tasks::UniTask_Awaiter& a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cysharp::Threading::Tasks::UniTask_Awaiter&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCLAZY_SETCOMPLETIONSOURCE_OFFSET))(this, a1);
		}

		static ::System::Void SetCompletionSource_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_ASYNCLAZY_SETCOMPLETIONSOURCE_1_OFFSET))(a1);
		}
	};
}
