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

#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x1E766ED0)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1E767000)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1E767280)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1E766DE0)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E7673A0)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1E767340)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1E767180)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1E7672D0)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E766DF0)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E766EC0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_YieldPromise_TypeDefinitionIndex = 31235;

	class UniTask_YieldPromise : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_YieldPromise*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_YieldPromise*>*)Il2CppClass::FromTypeDefinitionIndex(UniTask_YieldPromise_TypeDefinitionIndex)->GetStaticField(0x25940);
		}
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*> core; // 0x18
		::Cysharp::Threading::Tasks::UniTask_YieldPromise* nextNode; // 0x40

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

		static ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::Cysharp::Threading::Tasks::PlayerLoopTiming timing, ::System::Threading::CancellationToken cancellationToken, ::System::Int16& token)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Int16&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_CREATE_OFFSET))(timing, cancellationToken, token);
		}

		::System::Void GetResult(::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_GETRESULT_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 token)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_GETSTATUS_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE_ONCOMPLETED_OFFSET))(this, continuation, state, token);
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
