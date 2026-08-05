#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnPreRenderHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_GETONPRERENDERASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1FB3F4D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_GETONPRERENDERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1FB3F420)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_ONPRERENDERASYNC_1_OFFSET UNITYSDK_OFFSET(0x1FB3F680)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_ONPRERENDERASYNC_OFFSET UNITYSDK_OFFSET(0x1FB3F530)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_ONPRERENDER_OFFSET UNITYSDK_OFFSET(0x1FB3F400)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB3F790)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncPreRenderTrigger_TypeDefinitionIndex = 32021;

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

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreRenderHandler* GetOnPreRenderAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnPreRenderHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_GETONPRERENDERASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnPreRenderAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_ONPRERENDERASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnPreRenderAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPRERENDERTRIGGER_ONPRERENDERASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
