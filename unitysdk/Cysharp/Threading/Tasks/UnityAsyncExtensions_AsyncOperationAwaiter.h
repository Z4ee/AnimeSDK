#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AsyncOperation; }

#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONAWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x3BAA220)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONAWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BA9F60)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONAWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BAA2A0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONAWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BAA2A0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONAWAITER__CTOR_OFFSET UNITYSDK_OFFSET(0x7E7F0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityAsyncExtensions_AsyncOperationAwaiter_TypeDefinitionIndex = 42871;

	struct alignas(8) UnityAsyncExtensions_AsyncOperationAwaiter
	{
		::UnityEngine::AsyncOperation* asyncOperation; // 0x10
		::System::Action_1<::UnityEngine::AsyncOperation*>* continuationAction; // 0x18

		::System::Void _ctor(::UnityEngine::AsyncOperation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONAWAITER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONAWAITER_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void GetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONAWAITER_GETRESULT_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONAWAITER_ONCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void UnsafeOnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONAWAITER_UNSAFEONCOMPLETED_OFFSET))(this, a1);
		}
	};
}
