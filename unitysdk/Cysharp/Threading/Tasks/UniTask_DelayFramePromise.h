#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"

namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x1CE07720)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1CE0D980)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1CE0DB30)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1CE0D860)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CE0DC50)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1CE0DC30)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1CE0DAA0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1CE0DBE0)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE0D870)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE0D970)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_DelayFramePromise_TypeDefinitionIndex = 42649;

	class UniTask_DelayFramePromise : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayFramePromise*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayFramePromise*>*)Il2CppClass::FromTypeDefinitionIndex(UniTask_DelayFramePromise_TypeDefinitionIndex)->GetStaticField(0x625B0);
		}
		::Cysharp::Threading::Tasks::UniTask_DelayFramePromise* nextNode; // 0x10
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x18
		::System::Threading::CancellationToken cancellationToken; // 0x30
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> core; // 0x38
		::System::Int32 currentFrameCount; // 0x58
		::System::Int32 delayFrameCount; // 0x5C
		::System::Boolean cancelImmediately; // 0x60
		::System::Int32 initialFrame; // 0x64

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_DelayFramePromise*& get_NextNode()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_DelayFramePromise*&(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_GET_NEXTNODE_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::Int32 a1, ::Cysharp::Threading::Tasks::PlayerLoopTiming a2, ::System::Threading::CancellationToken a3, ::System::Boolean a4, ::System::Int16& a5)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::System::Int32, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Boolean, ::System::Int16&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_CREATE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void GetResult(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_GETRESULT_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_GETSTATUS_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* a1, ::System::Object* a2, ::System::Int16 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_ONCOMPLETED_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean TryReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE_TRYRETURN_OFFSET))(this);
		}
	};
}
