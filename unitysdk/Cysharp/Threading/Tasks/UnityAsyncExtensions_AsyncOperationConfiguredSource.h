#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class IProgress_1; }
namespace UnityEngine { class AsyncOperation; }

#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE_CONTINUATION_OFFSET UNITYSDK_OFFSET(0x1EA982B0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE_CREATE_OFFSET UNITYSDK_OFFSET(0x1EA90600)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1EA97D80)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1EA97F30)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1EA97BF0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EA98050)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1EA98030)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1EA97E20)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1EA97FE0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA97C00)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA97D00)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityAsyncExtensions_AsyncOperationConfiguredSource_TypeDefinitionIndex = 42872;

	class UnityAsyncExtensions_AsyncOperationConfiguredSource : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>*)Il2CppClass::FromTypeDefinitionIndex(UnityAsyncExtensions_AsyncOperationConfiguredSource_TypeDefinitionIndex)->GetStaticField(0x5A4F0);
		}
		::System::IProgress_1<::System::Single>* progress; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x18
		::System::Action_1<::UnityEngine::AsyncOperation*>* continuationAction; // 0x20
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x28
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> core; // 0x40
		::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource* nextNode; // 0x60
		::UnityEngine::AsyncOperation* asyncOperation; // 0x68
		::System::Boolean cancelImmediately; // 0x70
		::System::Boolean completed; // 0x71

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*& get_NextNode()
		{
			return ((::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*&(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE_GET_NEXTNODE_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::UnityEngine::AsyncOperation* a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::IProgress_1<::System::Single>* a3, ::System::Threading::CancellationToken a4, ::System::Boolean a5, ::System::Int16& a6)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::UnityEngine::AsyncOperation*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::IProgress_1<::System::Single>*, ::System::Threading::CancellationToken, ::System::Boolean, ::System::Int16&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Void GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean TryReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE_TRYRETURN_OFFSET))(this);
		}

		::System::Void Continuation(::UnityEngine::AsyncOperation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_ASYNCOPERATIONCONFIGUREDSOURCE_CONTINUATION_OFFSET))(this, a1);
		}
	};
}
