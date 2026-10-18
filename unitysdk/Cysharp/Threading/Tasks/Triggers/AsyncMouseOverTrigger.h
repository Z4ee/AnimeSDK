#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnMouseOverHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_GETONMOUSEOVERASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F131710)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_GETONMOUSEOVERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F131670)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_ONMOUSEOVERASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F131910)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_ONMOUSEOVERASYNC_OFFSET UNITYSDK_OFFSET(0x1F131770)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_ONMOUSEOVER_OFFSET UNITYSDK_OFFSET(0x1F131660)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F131A80)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncMouseOverTrigger_TypeDefinitionIndex = 38565;

	class AsyncMouseOverTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnMouseOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_ONMOUSEOVER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseOverHandler* GetOnMouseOverAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseOverHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_GETONMOUSEOVERASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseOverHandler* GetOnMouseOverAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnMouseOverHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_GETONMOUSEOVERASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseOverAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_ONMOUSEOVERASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnMouseOverAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCMOUSEOVERTRIGGER_ONMOUSEOVERASYNC_1_OFFSET))(this, a1);
		}
	};
}
