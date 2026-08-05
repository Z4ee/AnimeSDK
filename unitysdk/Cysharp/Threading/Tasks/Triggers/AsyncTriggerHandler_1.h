#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/ParticleSystemJobs/ParticleSystemJobData.h"

namespace Cysharp::Threading::Tasks { template <typename T> class ITriggerHandler_1; }
namespace Cysharp::Threading::Tasks::Triggers { template <typename T> class AsyncTriggerBase_1; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision2D; }
namespace UnityEngine { class Collision; }
namespace UnityEngine { class ControllerColliderHit; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Joint2D; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

namespace Cysharp::Threading::Tasks::Triggers
{
	inline static constexpr unsigned int AsyncTriggerHandler_1_TypeDefinitionIndex = 31941;

	template <typename T>
	class AsyncTriggerHandler_1 : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet_cancellationCallback()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AsyncTriggerHandler_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Cysharp::Threading::Tasks::Triggers::AsyncTriggerBase_1<T>* trigger; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration registration; // 0x0
		::System::Boolean isDisposed; // 0x0
		::System::Boolean callOnce; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> core; // 0x0
		::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* _Cysharp_Threading_Tasks_ITriggerHandler_T__Prev_k__BackingField; // 0x0
		::Cysharp::Threading::Tasks::ITriggerHandler_1<T>* _Cysharp_Threading_Tasks_ITriggerHandler_T__Next_k__BackingField; // 0x0
	};
}
