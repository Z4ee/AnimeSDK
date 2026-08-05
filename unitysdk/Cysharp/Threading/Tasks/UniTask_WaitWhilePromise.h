#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x1FB65600)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1FB65740)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1FB659C0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1FB65510)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FB65AE0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1FB65A80)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1FB658C0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1FB65A10)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB65520)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB655F0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WaitWhilePromise_TypeDefinitionIndex = 31875;

	class UniTask_WaitWhilePromise : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise*>*)Il2CppClass::FromTypeDefinitionIndex(UniTask_WaitWhilePromise_TypeDefinitionIndex)->GetStaticField(0x27070);
		}
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::System::Func_1<::System::Boolean>* predicate; // 0x18
		::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise* nextNode; // 0x20
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*> core; // 0x28

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

		static ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::Func_1<::System::Boolean>* predicate, ::Cysharp::Threading::Tasks::PlayerLoopTiming timing, ::System::Threading::CancellationToken cancellationToken, ::System::Int16& token)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::System::Func_1<::System::Boolean>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Int16&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_CREATE_OFFSET))(predicate, timing, cancellationToken, token);
		}

		::System::Void GetResult(::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_GETRESULT_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 token)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_GETSTATUS_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITWHILEPROMISE_ONCOMPLETED_OFFSET))(this, continuation, state, token);
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
