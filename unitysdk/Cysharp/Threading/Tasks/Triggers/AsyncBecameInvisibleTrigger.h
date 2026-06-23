#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnBecameInvisibleHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_GETONBECAMEINVISIBLEASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E84C0A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_GETONBECAMEINVISIBLEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E84BFF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_ONBECAMEINVISIBLEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E84C260)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_ONBECAMEINVISIBLEASYNC_OFFSET UNITYSDK_OFFSET(0x1E84C100)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_ONBECAMEINVISIBLE_OFFSET UNITYSDK_OFFSET(0x1E84BFD0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E84C370)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncBecameInvisibleTrigger_TypeDefinitionIndex = 31339;

	class AsyncBecameInvisibleTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnBecameInvisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_ONBECAMEINVISIBLE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameInvisibleHandler* GetOnBecameInvisibleAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameInvisibleHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_GETONBECAMEINVISIBLEASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameInvisibleHandler* GetOnBecameInvisibleAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnBecameInvisibleHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_GETONBECAMEINVISIBLEASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnBecameInvisibleAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_ONBECAMEINVISIBLEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnBecameInvisibleAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCBECAMEINVISIBLETRIGGER_ONBECAMEINVISIBLEASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
