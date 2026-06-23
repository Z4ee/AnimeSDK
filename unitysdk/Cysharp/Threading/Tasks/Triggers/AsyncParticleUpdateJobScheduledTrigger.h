#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/ParticleSystemJobs/ParticleSystemJobData.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnParticleUpdateJobScheduledHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_GETONPARTICLEUPDATEJOBSCHEDULEDASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1E772240)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_GETONPARTICLEUPDATEJOBSCHEDULEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1E772190)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_ONPARTICLEUPDATEJOBSCHEDULEDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1E772410)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_ONPARTICLEUPDATEJOBSCHEDULEDASYNC_OFFSET UNITYSDK_OFFSET(0x1E7722A0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_ONPARTICLEUPDATEJOBSCHEDULED_OFFSET UNITYSDK_OFFSET(0x1E772150)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E772530)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncParticleUpdateJobScheduledTrigger_TypeDefinitionIndex = 31395;

	class AsyncParticleUpdateJobScheduledTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnParticleUpdateJobScheduled(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData particles)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemJobs::ParticleSystemJobData))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_ONPARTICLEUPDATEJOBSCHEDULED_OFFSET))(this, particles);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler* GetOnParticleUpdateJobScheduledAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_GETONPARTICLEUPDATEJOBSCHEDULEDASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler* GetOnParticleUpdateJobScheduledAsyncHandler_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_GETONPARTICLEUPDATEJOBSCHEDULEDASYNCHANDLER_1_OFFSET))(this, cancellationToken);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData> OnParticleUpdateJobScheduledAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_ONPARTICLEUPDATEJOBSCHEDULEDASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData> OnParticleUpdateJobScheduledAsync_1(::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_ONPARTICLEUPDATEJOBSCHEDULEDASYNC_1_OFFSET))(this, cancellationToken);
		}
	};
}
