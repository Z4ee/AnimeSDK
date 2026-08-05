#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/TimeSpan.h"

namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x1FB42EE0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1FB43080)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1FB43300)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1FB42DF0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FB43420)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1FB433C0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1FB43200)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1FB43350)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB42E00)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB42ED0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_DelayPromise_TypeDefinitionIndex = 31862;

	class UniTask_DelayPromise : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayPromise*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayPromise*>*)Il2CppClass::FromTypeDefinitionIndex(UniTask_DelayPromise_TypeDefinitionIndex)->GetStaticField(0x27330);
		}
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*> core; // 0x10
		::Cysharp::Threading::Tasks::UniTask_DelayPromise* nextNode; // 0x38
		::System::Threading::CancellationToken cancellationToken; // 0x40
		::System::Single elapsed; // 0x48
		::System::Single delayTimeSpan; // 0x4C
		::System::Int32 initialFrame; // 0x50

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_DelayPromise*& get_NextNode()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_DelayPromise*&(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_GET_NEXTNODE_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::TimeSpan delayTimeSpan, ::Cysharp::Threading::Tasks::PlayerLoopTiming timing, ::System::Threading::CancellationToken cancellationToken, ::System::Int16& token)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::System::TimeSpan, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Int16&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_CREATE_OFFSET))(delayTimeSpan, timing, cancellationToken, token);
		}

		::System::Void GetResult(::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_GETRESULT_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 token)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_GETSTATUS_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_ONCOMPLETED_OFFSET))(this, continuation, state, token);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean TryReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYPROMISE_TRYRETURN_OFFSET))(this);
		}
	};
}
