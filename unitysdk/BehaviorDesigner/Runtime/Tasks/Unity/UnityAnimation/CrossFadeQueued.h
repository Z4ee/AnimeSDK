#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/PlayMode.h"
#include "unitysdk/UnityEngine/QueueMode.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADEQUEUED_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F21AAF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADEQUEUED_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F21A750)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADEQUEUED_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F21A8E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADEQUEUED__CTOR_OFFSET UNITYSDK_OFFSET(0x1F21AB90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADEQUEUED___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F21AC30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADEQUEUED___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F21ACC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADEQUEUED___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F21AD50)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityAnimation
{
	inline static constexpr unsigned int CrossFadeQueued_TypeDefinitionIndex = 34426;

	class CrossFadeQueued : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x58
		::UnityEngine::GameObject* prevGameObject; // 0x60
		::UnityEngine::Animation* animation; // 0x68
		::BehaviorDesigner::Runtime::SharedString* animationName; // 0x70
		::System::Single fadeLength; // 0x78
		::UnityEngine::PlayMode playMode; // 0x7C
		::UnityEngine::QueueMode queue; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADEQUEUED__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADEQUEUED_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADEQUEUED_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADEQUEUED_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADEQUEUED___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADEQUEUED___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADEQUEUED___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
