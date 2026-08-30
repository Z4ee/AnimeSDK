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
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/TimeSpan.h"

namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x1CE08170)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1CE0EDF0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1CE0EFA0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1CE0ECD0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CE0F0C0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CE0F0A0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1CE0EF10)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1CE0F050)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE0ECE0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE0EDE0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_DelayRealtimePromise_TypeDefinitionIndex = 42655;

	class UniTask_DelayRealtimePromise : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise*>*)Il2CppClass::FromTypeDefinitionIndex(UniTask_DelayRealtimePromise_TypeDefinitionIndex)->GetStaticField(0x626F0);
		}
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> core; // 0x10
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x30
		::System::Threading::CancellationToken cancellationToken; // 0x48
		::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise* nextNode; // 0x50
		::System::Boolean cancelImmediately; // 0x58
		::System::Int64 delayTimeSpanTicks; // 0x60
		::Cysharp::Threading::Tasks::Internal::ValueStopwatch stopwatch; // 0x68

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

		static ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::TimeSpan a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Threading::CancellationToken a3, ::System::Boolean a4, ::System::Int16& a5)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::System::TimeSpan, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean, ::System::Int16&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYREALTIMEPROMISE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
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
