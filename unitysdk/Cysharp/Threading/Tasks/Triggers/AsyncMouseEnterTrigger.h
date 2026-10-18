#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMouseEnterHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_GETONMOUSEENTERASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F130E90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_GETONMOUSEENTERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F130DF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_ONMOUSEENTERASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F131090)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_ONMOUSEENTERASYNC_OFFSET UNITYSDK_OFFSET(0x1F130EF0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_ONMOUSEENTER_OFFSET UNITYSDK_OFFSET(0x1F130DE0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F131200)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMouseEnterTrigger_TypeDefinitionIndex = 38561;

	class AsyncMouseEnterTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnMouseEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_ONMOUSEENTER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseEnterHandler* GetOnMouseEnterAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseEnterHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_GETONMOUSEENTERASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseEnterHandler* GetOnMouseEnterAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseEnterHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_GETONMOUSEENTERASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseEnterAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_ONMOUSEENTERASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseEnterAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEENTERTRIGGER_ONMOUSEENTERASYNC_1_OFFSET))(this, a1);
		}
	};
}
