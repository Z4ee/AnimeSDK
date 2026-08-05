#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }
namespace UnityEngine { class CharacterController; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_SETCENTER_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EC8EB80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_SETCENTER_ONSTART_OFFSET UNITYSDK_OFFSET(0x1EC8E7B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_SETCENTER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC8E940)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_SETCENTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8EBF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_SETCENTER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EC8EC80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_SETCENTER___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1EC8ED10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_SETCENTER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC8EDA0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityCharacterController
{
	inline static constexpr unsigned int SetCenter_TypeDefinitionIndex = 34477;

	class SetCenter : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector3* center; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::UnityEngine::CharacterController* characterController; // 0x68
		::UnityEngine::GameObject* prevGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_SETCENTER__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_SETCENTER_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_SETCENTER_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_SETCENTER_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_SETCENTER___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_SETCENTER___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_SETCENTER___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
