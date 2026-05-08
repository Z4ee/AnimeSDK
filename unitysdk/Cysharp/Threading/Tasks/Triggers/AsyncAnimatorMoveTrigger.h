#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnAnimatorMoveHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_GETONANIMATORMOVEASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1C427C70)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_GETONANIMATORMOVEASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1C427BD0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_ONANIMATORMOVEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1C427E20)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_ONANIMATORMOVEASYNC_OFFSET UNITYSDK_OFFSET(0x1C427CD0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x1C427BB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C427F30)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncAnimatorMoveTrigger_TypeDefinitionIndex = 28673;

	class AsyncAnimatorMoveTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnAnimatorMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_ONANIMATORMOVE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorMoveHandler* GetOnAnimatorMoveAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorMoveHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_GETONANIMATORMOVEASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorMoveHandler* GetOnAnimatorMoveAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnAnimatorMoveHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_GETONANIMATORMOVEASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnAnimatorMoveAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_ONANIMATORMOVEASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnAnimatorMoveAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCANIMATORMOVETRIGGER_ONANIMATORMOVEASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
