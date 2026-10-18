#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPreRenderHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_GETONPRERENDERASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F136230)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_GETONPRERENDERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F136190)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_ONPRERENDERASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F136430)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_ONPRERENDERASYNC_OFFSET UNITYSDK_OFFSET(0x1F136290)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_ONPRERENDER_OFFSET UNITYSDK_OFFSET(0x1F136180)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1365A0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPreRenderTrigger_TypeDefinitionIndex = 38583;

	class AsyncPreRenderTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnPreRender()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_ONPRERENDER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreRenderHandler* GetOnPreRenderAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreRenderHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_GETONPRERENDERASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreRenderHandler* GetOnPreRenderAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreRenderHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_GETONPRERENDERASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnPreRenderAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_ONPRERENDERASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnPreRenderAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_ONPRERENDERASYNC_1_OFFSET))(this, a1);
		}
	};
}
