#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPostRenderHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_GETONPOSTRENDERASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1C4D4750)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_GETONPOSTRENDERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1C4D46B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_ONPOSTRENDERASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C4D4900)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_ONPOSTRENDERASYNC_OFFSET UNITYSDK_OFFSET(0x1C4D47B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_ONPOSTRENDER_OFFSET UNITYSDK_OFFSET(0x1C4D4690)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4D4A10)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPostRenderTrigger_TypeDefinitionIndex = 28741;

	class AsyncPostRenderTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnPostRender()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_ONPOSTRENDER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPostRenderHandler* GetOnPostRenderAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPostRenderHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_GETONPOSTRENDERASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPostRenderHandler* GetOnPostRenderAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPostRenderHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_GETONPOSTRENDERASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnPostRenderAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_ONPOSTRENDERASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnPostRenderAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPOSTRENDERTRIGGER_ONPOSTRENDERASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
