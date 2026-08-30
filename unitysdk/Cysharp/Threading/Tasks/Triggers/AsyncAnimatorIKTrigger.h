#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnAnimatorIKHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_GETONANIMATORIKASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1EA5EFF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_GETONANIMATORIKASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1EA5EF50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_ONANIMATORIKASYNC_1_OFFSET UNITYSDK_OFFSET(0x1EA5F1F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_ONANIMATORIKASYNC_OFFSET UNITYSDK_OFFSET(0x1EA5F050)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_ONANIMATORIK_OFFSET UNITYSDK_OFFSET(0x1EA5EF40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5F360)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncAnimatorIKTrigger_TypeDefinitionIndex = 42924;

	class AsyncAnimatorIKTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnAnimatorIK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_ONANIMATORIK_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorIKHandler* GetOnAnimatorIKAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorIKHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_GETONANIMATORIKASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorIKHandler* GetOnAnimatorIKAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorIKHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_GETONANIMATORIKASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> OnAnimatorIKAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_ONANIMATORIKASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> OnAnimatorIKAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_ONANIMATORIKASYNC_1_OFFSET))(this, a1);
		}
	};
}
