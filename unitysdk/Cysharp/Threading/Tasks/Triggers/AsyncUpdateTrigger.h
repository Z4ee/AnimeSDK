#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncUpdateHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_GETUPDATEASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1FC34950)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_GETUPDATEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1FC348A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_UPDATEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1FC34B00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_UPDATEASYNC_OFFSET UNITYSDK_OFFSET(0x1FC349B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FC34880)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC34C10)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncUpdateTrigger_TypeDefinitionIndex = 32055;

	class AsyncUpdateTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_UPDATE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncUpdateHandler* GetUpdateAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncUpdateHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_GETUPDATEASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncUpdateHandler* GetUpdateAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncUpdateHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_GETUPDATEASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask UpdateAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_UPDATEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask UpdateAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCUPDATETRIGGER_UPDATEASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
