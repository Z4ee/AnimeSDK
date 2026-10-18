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

#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x1F13FAB0)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1F14CEB0)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1F14D0B0)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1F14CD90)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F14D230)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1F14D1D0)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1F14D010)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1F14D180)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F14CDA0)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F14CEA0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_YieldPromise_TypeDefinitionIndex = 38228;

	class UniTask_YieldPromise : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_YieldPromise*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_YieldPromise*>*)Il2CppClass::FromTypeDefinitionIndex(UniTask_YieldPromise_TypeDefinitionIndex)->GetStaticField(0x48170);
		}
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*> core; // 0x10
		::Cysharp::Threading::Tasks::UniTask_YieldPromise* nextNode; // 0x38
		::System::Threading::CancellationToken cancellationToken; // 0x40
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x48
		::System::Boolean cancelImmediately; // 0x60

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_YieldPromise*& get_NextNode()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_YieldPromise*&(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_GET_NEXTNODE_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::Cysharp::Threading::Tasks::PlayerLoopTiming a1, ::System::Threading::CancellationToken a2, ::System::Boolean a3, ::System::Int16& a4)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean, ::System::Int16&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_CREATE_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean TryReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_TRYRETURN_OFFSET))(this);
		}
	};
}
