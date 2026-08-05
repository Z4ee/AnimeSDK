#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_ISINTRANSITION_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9E08A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_ISINTRANSITION_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F9E0500)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_ISINTRANSITION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9E0690)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_ISINTRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9E08F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_ISINTRANSITION___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9E0980)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_ISINTRANSITION___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F9E0A10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_ISINTRANSITION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9E0AA0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityAnimator
{
	inline static constexpr unsigned int IsInTransition_TypeDefinitionIndex = 34450;

	class IsInTransition : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* index; // 0x50
		::UnityEngine::Animator* animator; // 0x58
		::UnityEngine::GameObject* prevGameObject; // 0x60
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_ISINTRANSITION__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_ISINTRANSITION_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_ISINTRANSITION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_ISINTRANSITION_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_ISINTRANSITION___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_ISINTRANSITION___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATOR_ISINTRANSITION___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
