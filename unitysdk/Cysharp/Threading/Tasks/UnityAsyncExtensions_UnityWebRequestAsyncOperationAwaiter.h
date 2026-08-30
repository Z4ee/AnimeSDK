#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine::Networking { class UnityWebRequest; }
namespace UnityEngine::Networking { class UnityWebRequestAsyncOperation; }

#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONAWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x3BAA3B0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONAWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BA9F60)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONAWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BAA3C0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONAWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BAA3C0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONAWAITER__CTOR_OFFSET UNITYSDK_OFFSET(0x7E7F0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter_TypeDefinitionIndex = 42883;

	struct alignas(8) UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter
	{
		::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOperation; // 0x10
		::System::Action_1<::UnityEngine::AsyncOperation*>* continuationAction; // 0x18

		::System::Void _ctor(::UnityEngine::Networking::UnityWebRequestAsyncOperation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Networking::UnityWebRequestAsyncOperation*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONAWAITER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONAWAITER_GET_ISCOMPLETED_OFFSET))(this);
		}

		::UnityEngine::Networking::UnityWebRequest* GetResult()
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONAWAITER_GETRESULT_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONAWAITER_ONCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void UnsafeOnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONAWAITER_UNSAFEONCOMPLETED_OFFSET))(this, a1);
		}
	};
}
