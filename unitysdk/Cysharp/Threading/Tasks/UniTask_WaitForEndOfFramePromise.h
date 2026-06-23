#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class WaitForEndOfFrame; }

#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x1E6BDC20)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1E6BDDB0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1E6BE030)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1E6BDB20)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1E6BE0F0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE_RESET_OFFSET UNITYSDK_OFFSET(0x1E6BE150)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E6BE160)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E6BE1C0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1E6BDF30)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1E6BE080)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6BDB30)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6BDC10)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WaitForEndOfFramePromise_TypeDefinitionIndex = 31239;

	class UniTask_WaitForEndOfFramePromise : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise*>*)Il2CppClass::FromTypeDefinitionIndex(UniTask_WaitForEndOfFramePromise_TypeDefinitionIndex)->GetStaticField(0x25B60);
		}
		static ::UnityEngine::WaitForEndOfFrame** StaticGet_waitForEndOfFrameYieldInstruction()
		{
			return (::UnityEngine::WaitForEndOfFrame**)Il2CppClass::FromTypeDefinitionIndex(UniTask_WaitForEndOfFramePromise_TypeDefinitionIndex)->GetStaticField(0x25B70);
		}
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise* nextNode; // 0x18
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*> core; // 0x20
		::System::Boolean isFirst; // 0x48

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise*& get_NextNode()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise*&(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE_GET_NEXTNODE_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::UnityEngine::MonoBehaviour* coroutineRunner, ::System::Threading::CancellationToken cancellationToken, ::System::Int16& token)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::UnityEngine::MonoBehaviour*, ::System::Threading::CancellationToken, ::System::Int16&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE_CREATE_OFFSET))(coroutineRunner, cancellationToken, token);
		}

		::System::Void GetResult(::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE_GETRESULT_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 token)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE_GETSTATUS_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE_ONCOMPLETED_OFFSET))(this, continuation, state, token);
		}

		::System::Boolean TryReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE_TRYRETURN_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean System_Collections_IEnumerator_MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE_RESET_OFFSET))(this);
		}
	};
}
