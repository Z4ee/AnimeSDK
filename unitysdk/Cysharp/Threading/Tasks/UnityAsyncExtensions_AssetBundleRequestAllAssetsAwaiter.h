#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AssetBundleRequest; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Object; }

#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTALLASSETSAWAITER_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x2DFB9E0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTALLASSETSAWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x3BAA060)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTALLASSETSAWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BA9F60)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTALLASSETSAWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BAA110)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTALLASSETSAWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3BAA110)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTALLASSETSAWAITER__CTOR_OFFSET UNITYSDK_OFFSET(0x7E7F0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter_TypeDefinitionIndex = 42865;

	struct alignas(8) UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter
	{
		::UnityEngine::AssetBundleRequest* asyncOperation; // 0x10
		::System::Action_1<::UnityEngine::AsyncOperation*>* continuationAction; // 0x18

		::System::Void _ctor(::UnityEngine::AssetBundleRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AssetBundleRequest*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTALLASSETSAWAITER__CTOR_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter GetAwaiter()
		{
			return ((::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTALLASSETSAWAITER_GETAWAITER_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTALLASSETSAWAITER_GET_ISCOMPLETED_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Object*>* GetResult()
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTALLASSETSAWAITER_GETRESULT_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTALLASSETSAWAITER_ONCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void UnsafeOnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTALLASSETSAWAITER_UNSAFEONCOMPLETED_OFFSET))(this, a1);
		}
	};
}
