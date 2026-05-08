#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Internal/ValueStopwatch.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/TimeSpan.h"

namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x1C4F7980)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1C4F7B90)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C4F7D00)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1C4F7890)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C4F7E60)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C4F7E40)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1C4F7C80)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C4F7DD0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4F78A0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F7970)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_DelayRealtimePromise_TypeDefinitionIndex = 28592;

	class UniTask_DelayRealtimePromise : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise*>*)Il2CppClass::FromTypeDefinitionIndex(UniTask_DelayRealtimePromise_TypeDefinitionIndex)->GetStaticField(0x21B40);
		}
		::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise* nextNode; // 0x10
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> core; // 0x18
		::System::Threading::CancellationToken cancellationToken; // 0x38
		::Cysharp::Threading::Tasks::Internal::ValueStopwatch stopwatch; // 0x40
		::System::Int64 delayTimeSpanTicks; // 0x48

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise*& get_NextNode()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise*&(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_GET_NEXTNODE_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::TimeSpan delayTimeSpan, ::Cysharp::Threading::Tasks::PlayerLoopTiming timing, ::System::Threading::CancellationToken cancellationToken, ::System::Int16& token)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::System::TimeSpan, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Int16&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_CREATE_OFFSET))(delayTimeSpan, timing, cancellationToken, token);
		}

		::System::Void GetResult(::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_GETRESULT_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 token)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_GETSTATUS_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_ONCOMPLETED_OFFSET))(this, continuation, state, token);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean TryReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_TRYRETURN_OFFSET))(this);
		}
	};
}
