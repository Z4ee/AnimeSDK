#pragma once
#include "unitysdk/unitysdk.h"
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

#define CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x1EA79EB0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1EA80190)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1EA80390)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1EA80070)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EA80510)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1EA804B0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1EA802F0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1EA80460)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA80080)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA80180)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_DelayIgnoreTimeScalePromise_TypeDefinitionIndex = 42653;

	class UniTask_DelayIgnoreTimeScalePromise : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise*>*)Il2CppClass::FromTypeDefinitionIndex(UniTask_DelayIgnoreTimeScalePromise_TypeDefinitionIndex)->GetStaticField(0x58E10);
		}
		::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise* nextNode; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x18
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*> core; // 0x20
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x48
		::System::Boolean cancelImmediately; // 0x60
		::System::Single elapsed; // 0x64
		::System::Single delayFrameTimeSpan; // 0x68
		::System::Int32 initialFrame; // 0x6C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise*& get_NextNode()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise*&(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE_GET_NEXTNODE_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::TimeSpan a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Threading::CancellationToken a3, ::System::Boolean a4, ::System::Int16& a5)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::System::TimeSpan, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean, ::System::Int16&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean TryReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYIGNORETIMESCALEPROMISE_TRYRETURN_OFFSET))(this);
		}
	};
}
