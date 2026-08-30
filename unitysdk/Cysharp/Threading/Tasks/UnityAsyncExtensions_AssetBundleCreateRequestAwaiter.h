#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine { class AssetBundleCreateRequest; }
namespace UnityEngine { class AsyncOperation; }

#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLECREATEREQUESTAWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x3BB82D0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLECREATEREQUESTAWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BB82B0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLECREATEREQUESTAWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BB8380)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLECREATEREQUESTAWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BB8380)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLECREATEREQUESTAWAITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B79420)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityAsyncExtensions_AssetBundleCreateRequestAwaiter_TypeDefinitionIndex = 42880;

	struct alignas(8) UnityAsyncExtensions_AssetBundleCreateRequestAwaiter
	{
		::UnityEngine::AssetBundleCreateRequest* asyncOperation; // 0x10
		::System::Action_1<::UnityEngine::AsyncOperation*>* continuationAction; // 0x18

		::System::Void _ctor(::UnityEngine::AssetBundleCreateRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AssetBundleCreateRequest*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLECREATEREQUESTAWAITER__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLECREATEREQUESTAWAITER_GET_ISCOMPLETED_OFFSET))(this);
		}

		::UnityEngine::AssetBundle* GetResult()
		{
			return ((::UnityEngine::AssetBundle*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLECREATEREQUESTAWAITER_GETRESULT_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLECREATEREQUESTAWAITER_ONCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void UnsafeOnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLECREATEREQUESTAWAITER_UNSAFEONCOMPLETED_OFFSET))(this, a1);
		}
	};
}
