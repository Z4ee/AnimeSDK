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
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine::Networking { class UnityWebRequest; }
namespace UnityEngine::Networking { class UnityWebRequestAsyncOperation; }

#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_CONTINUATION_OFFSET UNITYSDK_OFFSET(0x1CE27E20)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_CREATE_OFFSET UNITYSDK_OFFSET(0x1CE20080)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1CE278B0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1CE276D0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1CE27970)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1CE27540)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CE27AF0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CE27A90)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1CE277A0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1CE27A40)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE27550)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE27650)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_TypeDefinitionIndex = 42884;

	class UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>*)Il2CppClass::FromTypeDefinitionIndex(UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_TypeDefinitionIndex)->GetStaticField(0x62FF0);
		}
		::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource* nextNode; // 0x10
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Networking::UnityWebRequest*> core; // 0x18
		::System::Action_1<::UnityEngine::AsyncOperation*>* continuationAction; // 0x40
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x48
		::System::IProgress_1<::System::Single>* progress; // 0x60
		::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOperation; // 0x68
		::System::Threading::CancellationToken cancellationToken; // 0x70
		::System::Boolean cancelImmediately; // 0x78
		::System::Boolean completed; // 0x79

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*& get_NextNode()
		{
			return ((::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*&(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_GET_NEXTNODE_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>* Create(::UnityEngine::Networking::UnityWebRequestAsyncOperation* a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::IProgress_1<::System::Single>* a3, ::System::Threading::CancellationToken a4, ::System::Boolean a5, ::System::Int16& a6)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>*(*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::IProgress_1<::System::Single>*, ::System::Threading::CancellationToken, ::System::Boolean, ::System::Int16&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Networking::UnityWebRequest* GetResult(::System::Int16 a1)
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::System::Void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean TryReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_TRYRETURN_OFFSET))(this);
		}

		::System::Void Continuation(::UnityEngine::AsyncOperation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_CONTINUATION_OFFSET))(this, a1);
		}
	};
}
