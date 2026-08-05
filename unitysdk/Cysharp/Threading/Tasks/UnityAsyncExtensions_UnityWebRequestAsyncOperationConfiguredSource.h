#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskSource_1; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class IProgress_1; }
namespace UnityEngine::Networking { class UnityWebRequest; }
namespace UnityEngine::Networking { class UnityWebRequestAsyncOperation; }

#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_CREATE_OFFSET UNITYSDK_OFFSET(0x1FB65D50)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1FB66120)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1FB65EB0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1FB66130)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1FB65C60)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FB66250)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1FB661F0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1FB66030)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1FB66180)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB65C70)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB65D40)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_TypeDefinitionIndex = 31928;

	class UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>*)Il2CppClass::FromTypeDefinitionIndex(UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource_TypeDefinitionIndex)->GetStaticField(0x271B0);
		}
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Networking::UnityWebRequest*> core; // 0x10
		::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOperation; // 0x38
		::System::Threading::CancellationToken cancellationToken; // 0x40
		::System::IProgress_1<::System::Single>* progress; // 0x48
		::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource* nextNode; // 0x50

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

		static ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>* Create(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming timing, ::System::IProgress_1<::System::Single>* progress, ::System::Threading::CancellationToken cancellationToken, ::System::Int16& token)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>*(*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::IProgress_1<::System::Single>*, ::System::Threading::CancellationToken, ::System::Int16&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_CREATE_OFFSET))(asyncOperation, timing, progress, cancellationToken, token);
		}

		::UnityEngine::Networking::UnityWebRequest* GetResult(::System::Int16 token)
		{
			return ((::UnityEngine::Networking::UnityWebRequest*(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_GETRESULT_OFFSET))(this, token);
		}

		::System::Void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 token)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_GETSTATUS_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_ONCOMPLETED_OFFSET))(this, continuation, state, token);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean TryReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_UNITYWEBREQUESTASYNCOPERATIONCONFIGUREDSOURCE_TRYRETURN_OFFSET))(this);
		}
	};
}
