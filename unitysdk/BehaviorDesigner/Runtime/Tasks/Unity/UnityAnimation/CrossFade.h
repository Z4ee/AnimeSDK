#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/PlayMode.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E46BBB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E46B4C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E46B650)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E46BC70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E46BD30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E46BDC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E46BE50)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityAnimation
{
	inline static constexpr unsigned int CrossFade_TypeDefinitionIndex = 34425;

	class CrossFade : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* animationName; // 0x58
		::UnityEngine::Animation* animation; // 0x60
		::UnityEngine::GameObject* prevGameObject; // 0x68
		::BehaviorDesigner::Runtime::SharedFloat* fadeLength; // 0x70
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x78
		::BehaviorDesigner::Runtime::SharedFloat* animationSpeed; // 0x80
		::UnityEngine::PlayMode playMode; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_CROSSFADE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
