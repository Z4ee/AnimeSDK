#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x1EA7BD30)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1EA84510)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1EA84710)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1EA843F0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EA84890)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1EA84830)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1EA84670)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1EA847E0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA84400)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA84500)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WaitWhilePromise_TypeDefinitionIndex = 42671;

	class UniTask_WaitWhilePromise : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise*>*)Il2CppClass::FromTypeDefinitionIndex(UniTask_WaitWhilePromise_TypeDefinitionIndex)->GetStaticField(0x59600);
		}
		::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise* nextNode; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x18
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*> core; // 0x20
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x48
		::System::Func_1<::System::Boolean>* predicate; // 0x60
		::System::Boolean cancelImmediately; // 0x68

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise*& get_NextNode()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise*&(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_GET_NEXTNODE_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::Func_1<::System::Boolean>* a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Threading::CancellationToken a3, ::System::Boolean a4, ::System::Int16& a5)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::System::Func_1<::System::Boolean>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean, ::System::Int16&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean TryReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_TRYRETURN_OFFSET))(this);
		}
	};
}
