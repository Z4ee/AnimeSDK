#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/ParticleSystemJobs/ParticleSystemJobData.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnParticleUpdateJobScheduledHandler; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_GETONPARTICLEUPDATEJOBSCHEDULEDASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1EA6C2E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_GETONPARTICLEUPDATEJOBSCHEDULEDASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1EA6C220)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_ONPARTICLEUPDATEJOBSCHEDULEDASYNC_1_OFFSET UNITYSDK_OFFSET(0x1EA6C510)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_ONPARTICLEUPDATEJOBSCHEDULEDASYNC_OFFSET UNITYSDK_OFFSET(0x1EA6C340)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_ONPARTICLEUPDATEJOBSCHEDULED_OFFSET UNITYSDK_OFFSET(0x1EA6C1E0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6C690)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncParticleUpdateJobScheduledTrigger_TypeDefinitionIndex = 42992;

	class AsyncParticleUpdateJobScheduledTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnParticleUpdateJobScheduled(::UnityEngine::ParticleSystemJobs::ParticleSystemJobData a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemJobs::ParticleSystemJobData))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_ONPARTICLEUPDATEJOBSCHEDULED_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler* GetOnParticleUpdateJobScheduledAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_GETONPARTICLEUPDATEJOBSCHEDULEDASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler* GetOnParticleUpdateJobScheduledAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleUpdateJobScheduledHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_GETONPARTICLEUPDATEJOBSCHEDULEDASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData> OnParticleUpdateJobScheduledAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_ONPARTICLEUPDATEJOBSCHEDULEDASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData> OnParticleUpdateJobScheduledAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::ParticleSystemJobs::ParticleSystemJobData>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLEUPDATEJOBSCHEDULEDTRIGGER_ONPARTICLEUPDATEJOBSCHEDULEDASYNC_1_OFFSET))(this, a1);
		}
	};
}
