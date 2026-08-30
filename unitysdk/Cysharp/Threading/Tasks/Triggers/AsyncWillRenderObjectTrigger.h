#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnWillRenderObjectHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_GETONWILLRENDEROBJECTASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1EA77E20)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_GETONWILLRENDEROBJECTASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1EA77D70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_ONWILLRENDEROBJECTASYNC_1_OFFSET UNITYSDK_OFFSET(0x1EA78020)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_ONWILLRENDEROBJECTASYNC_OFFSET UNITYSDK_OFFSET(0x1EA77E80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_ONWILLRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x1EA77D60)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA78190)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncWillRenderObjectTrigger_TypeDefinitionIndex = 43028;

	class AsyncWillRenderObjectTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnWillRenderObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_ONWILLRENDEROBJECT_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnWillRenderObjectHandler* GetOnWillRenderObjectAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnWillRenderObjectHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_GETONWILLRENDEROBJECTASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnWillRenderObjectHandler* GetOnWillRenderObjectAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnWillRenderObjectHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_GETONWILLRENDEROBJECTASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnWillRenderObjectAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_ONWILLRENDEROBJECTASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnWillRenderObjectAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCWILLRENDEROBJECTTRIGGER_ONWILLRENDEROBJECTASYNC_1_OFFSET))(this, a1);
		}
	};
}
