#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnRenderObjectHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_GETONRENDEROBJECTASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1D767C20)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_GETONRENDEROBJECTASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1D767B80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_ONRENDEROBJECTASYNC_1_OFFSET UNITYSDK_OFFSET(0x1D767E20)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_ONRENDEROBJECTASYNC_OFFSET UNITYSDK_OFFSET(0x1D767C80)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_ONRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x1D767B70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D767F90)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncRenderObjectTrigger_TypeDefinitionIndex = 43006;

	class AsyncRenderObjectTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnRenderObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_ONRENDEROBJECT_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderObjectHandler* GetOnRenderObjectAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderObjectHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_GETONRENDEROBJECTASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderObjectHandler* GetOnRenderObjectAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderObjectHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_GETONRENDEROBJECTASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnRenderObjectAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_ONRENDEROBJECTASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnRenderObjectAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDEROBJECTTRIGGER_ONRENDEROBJECTASYNC_1_OFFSET))(this, a1);
		}
	};
}
