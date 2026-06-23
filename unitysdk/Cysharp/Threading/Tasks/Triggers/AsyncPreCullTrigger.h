#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPreCullHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_GETONPRECULLASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E7666B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_GETONPRECULLASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E766600)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_ONPRECULLASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E766870)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_ONPRECULLASYNC_OFFSET UNITYSDK_OFFSET(0x1E766710)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_ONPRECULL_OFFSET UNITYSDK_OFFSET(0x1E7665E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E766980)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPreCullTrigger_TypeDefinitionIndex = 31399;

	class AsyncPreCullTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnPreCull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_ONPRECULL_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreCullHandler* GetOnPreCullAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreCullHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_GETONPRECULLASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreCullHandler* GetOnPreCullAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreCullHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_GETONPRECULLASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnPreCullAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_ONPRECULLASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnPreCullAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRECULLTRIGGER_ONPRECULLASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
