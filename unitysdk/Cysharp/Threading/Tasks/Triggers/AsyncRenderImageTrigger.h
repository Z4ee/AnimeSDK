#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnRenderImageHandler; }
namespace UnityEngine { class RenderTexture; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_GETONRENDERIMAGEASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1C520B00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_GETONRENDERIMAGEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1C520A30)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C520CE0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGEASYNC_OFFSET UNITYSDK_OFFSET(0x1C520B60)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGE_OFFSET UNITYSDK_OFFSET(0x1C5209B0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C520E00)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncRenderImageTrigger_TypeDefinitionIndex = 28751;

	class AsyncRenderImageTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::System::ValueTuple_2<::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*>>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnRenderImage(::UnityEngine::RenderTexture* source, ::UnityEngine::RenderTexture* destination)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGE_OFFSET))(this, source, destination);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler* GetOnRenderImageAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_GETONRENDERIMAGEASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler* GetOnRenderImageAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnRenderImageHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_GETONRENDERIMAGEASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*>> OnRenderImageAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*>>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*>> OnRenderImageAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::UnityEngine::RenderTexture*, ::UnityEngine::RenderTexture*>>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCRENDERIMAGETRIGGER_ONRENDERIMAGEASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
