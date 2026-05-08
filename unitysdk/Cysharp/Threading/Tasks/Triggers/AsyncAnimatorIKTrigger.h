#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnAnimatorIKHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_GETONANIMATORIKASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1C427890)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_GETONANIMATORIKASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1C4277E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_ONANIMATORIKASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C427A40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_ONANIMATORIKASYNC_OFFSET UNITYSDK_OFFSET(0x1C4278F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_ONANIMATORIK_OFFSET UNITYSDK_OFFSET(0x1C4277D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C427B50)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncAnimatorIKTrigger_TypeDefinitionIndex = 28671;

	class AsyncAnimatorIKTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnAnimatorIK(::System::Int32 layerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_ONANIMATORIK_OFFSET))(this, layerIndex);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorIKHandler* GetOnAnimatorIKAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorIKHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_GETONANIMATORIKASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorIKHandler* GetOnAnimatorIKAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorIKHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_GETONANIMATORIKASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> OnAnimatorIKAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_ONANIMATORIKASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Int32> OnAnimatorIKAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORIKTRIGGER_ONANIMATORIKASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
