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
namespace UnityEngine { class Object; }
namespace UnityEngine { class ResourceRequest; }

#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE_CONTINUATION_OFFSET UNITYSDK_OFFSET(0x1EA991A0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE_CREATE_OFFSET UNITYSDK_OFFSET(0x1EA90CF0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1EA98CE0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1EA98AF0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1EA98DA0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1EA98960)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EA98F20)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1EA98EC0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1EA98BC0)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1EA98E70)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA98970)
#define CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA98A70)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityAsyncExtensions_ResourceRequestConfiguredSource_TypeDefinitionIndex = 42875;

	class UnityAsyncExtensions_ResourceRequestConfiguredSource : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>*)Il2CppClass::FromTypeDefinitionIndex(UnityAsyncExtensions_ResourceRequestConfiguredSource_TypeDefinitionIndex)->GetStaticField(0x5A590);
		}
		::UnityEngine::ResourceRequest* asyncOperation; // 0x10
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Object*> core; // 0x18
		::System::IProgress_1<::System::Single>* progress; // 0x40
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x48
		::System::Action_1<::UnityEngine::AsyncOperation*>* continuationAction; // 0x60
		::System::Threading::CancellationToken cancellationToken; // 0x68
		::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource* nextNode; // 0x70
		::System::Boolean cancelImmediately; // 0x78
		::System::Boolean completed; // 0x79

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*& get_NextNode()
		{
			return ((::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*&(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE_GET_NEXTNODE_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Object*>* Create(::UnityEngine::ResourceRequest* a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::IProgress_1<::System::Single>* a3, ::System::Threading::CancellationToken a4, ::System::Boolean a5, ::System::Int16& a6)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Object*>*(*)(::UnityEngine::ResourceRequest*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::IProgress_1<::System::Single>*, ::System::Threading::CancellationToken, ::System::Boolean, ::System::Int16&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE_CREATE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::UnityEngine::Object* GetResult(::System::Int16 a1)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::System::Void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE_CYSHARP_THREADING_TASKS_IUNITASKSOURCE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean TryReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE_TRYRETURN_OFFSET))(this);
		}

		::System::Void Continuation(::UnityEngine::AsyncOperation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITYASYNCEXTENSIONS_RESOURCEREQUESTCONFIGUREDSOURCE_CONTINUATION_OFFSET))(this, a1);
		}
	};
}
