#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnRenderImageHandler; }
namespace UnityEngine { class RenderTexture; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_GETONRENDERIMAGEASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1D767790)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_GETONRENDERIMAGEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1D7676C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1D7679D0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGEASYNC_OFFSET UNITYSDK_OFFSET(0x1D7677F0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGE_OFFSET UNITYSDK_OFFSET(0x1D767640)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D767B50)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncRenderImageTrigger_TypeDefinitionIndex = 43004;

	class AsyncRenderImageTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::System::ValueTuple_2<::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*>>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnRenderImage(::UnityEngine::RenderTexture* a1, ::UnityEngine::RenderTexture* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGE_OFFSET))(this, a1, a2);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler* GetOnRenderImageAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_GETONRENDERIMAGEASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler* GetOnRenderImageAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_GETONRENDERIMAGEASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*>> OnRenderImageAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*>>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*>> OnRenderImageAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*>>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGEASYNC_1_OFFSET))(this, a1);
		}
	};
}
