#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskSource_1; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class IProgress_1; }
namespace UnityEngine { class AssetBundleRequest; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Object; }

#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_CONTINUATION_OFFSET UNITYSDK_OFFSET(0x1CE24F50)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_CREATE_OFFSET UNITYSDK_OFFSET(0x1CE1F1F0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1CE24A90)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1CE248B0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1CE24B50)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1CE24720)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CE24CD0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CE24C70)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1CE24980)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1CE24C20)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE24730)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE24830)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityAsyncExtensions_AssetBundleRequestConfiguredSource_TypeDefinitionIndex = 42878;

	class UnityAsyncExtensions_AssetBundleRequestConfiguredSource : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>*)Il2CppClass::FromTypeDefinitionIndex(UnityAsyncExtensions_AssetBundleRequestConfiguredSource_TypeDefinitionIndex)->GetStaticField(0x62F10);
		}
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Object*> core; // 0x10
		::System::IProgress_1<::System::Single>* progress; // 0x38
		::System::Threading::CancellationToken cancellationToken; // 0x40
		::System::Action_1<::UnityEngine::AsyncOperation*>* continuationAction; // 0x48
		::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource* nextNode; // 0x50
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x58
		::UnityEngine::AssetBundleRequest* asyncOperation; // 0x70
		::System::Boolean completed; // 0x78
		::System::Boolean cancelImmediately; // 0x79

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*& get_NextNode()
		{
			return ((::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*&(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_GET_NEXTNODE_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Object*>* Create(::UnityEngine::AssetBundleRequest* a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::IProgress_1<::System::Single>* a3, ::System::Threading::CancellationToken a4, ::System::Boolean a5, ::System::Int16& a6)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Object*>*(*)(::UnityEngine::AssetBundleRequest*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::IProgress_1<::System::Single>*, ::System::Threading::CancellationToken, ::System::Boolean, ::System::Int16&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Object* GetResult(::System::Int16 a1)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::System::Void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean TryReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_TRYRETURN_OFFSET))(this);
		}

		::System::Void Continuation(::UnityEngine::AsyncOperation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASSETBUNDLEREQUESTCONFIGUREDSOURCE_CONTINUATION_OFFSET))(this, a1);
		}
	};
}
