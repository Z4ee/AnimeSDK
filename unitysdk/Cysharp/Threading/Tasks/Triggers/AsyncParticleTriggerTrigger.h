#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnParticleTriggerHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_GETONPARTICLETRIGGERASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1FC33810)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_GETONPARTICLETRIGGERASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1FC33760)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_ONPARTICLETRIGGERASYNC_1_OFFSET UNITYSDK_OFFSET(0x1FC339C0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_ONPARTICLETRIGGERASYNC_OFFSET UNITYSDK_OFFSET(0x1FC33870)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_ONPARTICLETRIGGER_OFFSET UNITYSDK_OFFSET(0x1FC33740)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC33AD0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncParticleTriggerTrigger_TypeDefinitionIndex = 32013;

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

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleTriggerHandler* GetOnParticleTriggerAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleTriggerHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_GETONPARTICLETRIGGERASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask OnParticleTriggerAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_ONPARTICLETRIGGERASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask OnParticleTriggerAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLETRIGGERTRIGGER_ONPARTICLETRIGGERASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
