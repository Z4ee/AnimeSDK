#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class CharacterController; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_ISGROUNDED_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7CD3E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_ISGROUNDED_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F7CD0B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_ISGROUNDED_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7CD240)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_ISGROUNDED__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7CD430)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_ISGROUNDED___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7CD4C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_ISGROUNDED___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F7CD550)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_ISGROUNDED___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7CD5E0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityCharacterController
{
	inline static constexpr unsigned int IsGrounded_TypeDefinitionIndex = 34475;

	class IsGrounded : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::UnityEngine::GameObject* prevGameObject; // 0x50
		::UnityEngine::CharacterController* characterController; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_ISGROUNDED__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_ISGROUNDED_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_ISGROUNDED_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_ISGROUNDED_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_ISGROUNDED___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_ISGROUNDED___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_ISGROUNDED___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
