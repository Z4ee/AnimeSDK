#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ResourceRequest; }

#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTAWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x3BB8620)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTAWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BB82B0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTAWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BB86D0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTAWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BB86D0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTAWAITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B79420)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityAsyncExtensions_ResourceRequestAwaiter_TypeDefinitionIndex = 42874;

	struct alignas(8) UnityAsyncExtensions_ResourceRequestAwaiter
	{
		::UnityEngine::ResourceRequest* asyncOperation; // 0x10
		::System::Action_1<::UnityEngine::AsyncOperation*>* continuationAction; // 0x18

		::System::Void _ctor(::UnityEngine::ResourceRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ResourceRequest*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTAWAITER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTAWAITER_GET_ISCOMPLETED_OFFSET))(this);
		}

		::UnityEngine::Object* GetResult()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTAWAITER_GETRESULT_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTAWAITER_ONCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void UnsafeOnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTAWAITER_UNSAFEONCOMPLETED_OFFSET))(this, a1);
		}
	};
}
