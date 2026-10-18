#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/Triggers/AsyncTriggerBase_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace Cysharp::Threading::Tasks::Triggers { class IAsyncOnParticleCollisionHandler; }
namespace UnityEngine { class GameObject; }

#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_GETONPARTICLECOLLISIONASYNCHANDLER_1_OFFSET UNITYSDK_OFFSET(0x1F132DE0)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_GETONPARTICLECOLLISIONASYNCHANDLER_OFFSET UNITYSDK_OFFSET(0x1F132D00)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_ONPARTICLECOLLISIONASYNC_1_OFFSET UNITYSDK_OFFSET(0x1F133020)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_ONPARTICLECOLLISIONASYNC_OFFSET UNITYSDK_OFFSET(0x1F132E40)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_ONPARTICLECOLLISION_OFFSET UNITYSDK_OFFSET(0x1F132C90)
#define CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1331A0)

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncParticleCollisionTrigger_TypeDefinitionIndex = 38571;

	class AsyncParticleCollisionTrigger : public ::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<::UnityEngine::GameObject*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnParticleCollision(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_ONPARTICLECOLLISION_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleCollisionHandler* GetOnParticleCollisionAsyncHandler()
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleCollisionHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_GETONPARTICLECOLLISIONASYNCHANDLER_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleCollisionHandler* GetOnParticleCollisionAsyncHandler_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::Triggers::IAsyncOnParticleCollisionHandler*(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_GETONPARTICLECOLLISIONASYNCHANDLER_1_OFFSET))(this, a1);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::GameObject*> OnParticleCollisionAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::GameObject*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_ONPARTICLECOLLISIONASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::GameObject*> OnParticleCollisionAsync_1(::System::Threading::CancellationToken a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::GameObject*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_TRIGGERS_ASYNCPARTICLECOLLISIONTRIGGER_ONPARTICLECOLLISIONASYNC_1_OFFSET))(this, a1);
		}
	};
}
