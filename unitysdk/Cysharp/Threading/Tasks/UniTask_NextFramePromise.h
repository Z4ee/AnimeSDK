#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/TaskPool_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE_CREATE_OFFSET UNITYSDK_OFFSET(0x1C431480)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE_GETRESULT_OFFSET UNITYSDK_OFFSET(0x1C431610)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C4317A0)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE_GET_NEXTNODE_OFFSET UNITYSDK_OFFSET(0x1C431390)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C431900)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1C4318E0)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE_TRYRETURN_OFFSET UNITYSDK_OFFSET(0x1C431710)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE_UNSAFEGETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C431870)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4313A0)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C431470)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_NextFramePromise_TypeDefinitionIndex = 28582;

	class UniTask_NextFramePromise : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_NextFramePromise*>* StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_NextFramePromise*>*)Il2CppClass::FromTypeDefinitionIndex(UniTask_NextFramePromise_TypeDefinitionIndex)->GetStaticField(0x21D40);
		}
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::Cysharp::Threading::Tasks::UniTask_NextFramePromise* nextNode; // 0x18
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> core; // 0x20
		::System::Int32 frameCount; // 0x40

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE__CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_NextFramePromise*& get_NextNode()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_NextFramePromise*&(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE_GET_NEXTNODE_OFFSET))(this);
		}

		static ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::Cysharp::Threading::Tasks::PlayerLoopTiming timing, ::System::Threading::CancellationToken cancellationToken, ::System::Int16& token)
		{
			return ((::Cysharp::Threading::Tasks::IUniTaskSource*(*)(::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::System::Int16&))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE_CREATE_OFFSET))(timing, cancellationToken, token);
		}

		::System::Void GetResult(::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE_GETRESULT_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(::System::Int16 token)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE_GETSTATUS_OFFSET))(this, token);
		}

		::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus()
		{
			return ((::Cysharp::Threading::Tasks::UniTaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE_UNSAFEGETSTATUS_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action_1<::System::Object*>* continuation, ::System::Object* state, ::System::Int16 token)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Int16))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE_ONCOMPLETED_OFFSET))(this, continuation, state, token);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE_MOVENEXT_OFFSET))(this);
		}

		::System::Boolean TryReturn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE_TRYRETURN_OFFSET))(this);
		}
	};
}
