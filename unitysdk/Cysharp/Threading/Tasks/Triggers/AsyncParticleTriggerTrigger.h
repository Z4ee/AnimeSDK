#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnParticleTriggerHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_GETONPARTICLETRIGGERASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1EA6BE50)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_GETONPARTICLETRIGGERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1EA6BDA0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_ONPARTICLETRIGGERASYNC_1_OFFSET UNITYSDK_OFFSET(0x1EA6C050)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_ONPARTICLETRIGGERASYNC_OFFSET UNITYSDK_OFFSET(0x1EA6BEB0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_ONPARTICLETRIGGER_OFFSET UNITYSDK_OFFSET(0x1EA6BD90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6C1C0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncParticleTriggerTrigger_TypeDefinitionIndex = 42990;

	class AsyncParticleTriggerTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::Cysharp::Threading::Tasks::AsyncUnit>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnParticleTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_ONPARTICLETRIGGER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleTriggerHandler* GetOnParticleTriggerAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleTriggerHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_GETONPARTICLETRIGGERASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleTriggerHandler* GetOnParticleTriggerAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleTriggerHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_GETONPARTICLETRIGGERASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask OnParticleTriggerAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_ONPARTICLETRIGGERASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnParticleTriggerAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_ONPARTICLETRIGGERASYNC_1_OFFSET))(this, a1);
		}
	};
}
