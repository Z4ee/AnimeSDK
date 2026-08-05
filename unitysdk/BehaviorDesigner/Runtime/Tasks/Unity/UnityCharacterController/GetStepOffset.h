#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class CharacterController; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETSTEPOFFSET_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F5D7840)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETSTEPOFFSET_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F5D74F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETSTEPOFFSET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5D7680)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETSTEPOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5D7890)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETSTEPOFFSET___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F5D7920)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETSTEPOFFSET___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F5D7960)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETSTEPOFFSET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F5D79A0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityCharacterController
{
	inline static constexpr unsigned int GetStepOffset_TypeDefinitionIndex = 34473;

	class GetStepOffset : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::GameObject* prevGameObject; // 0x58
		::UnityEngine::CharacterController* characterController; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* storeValue; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETSTEPOFFSET__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETSTEPOFFSET_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETSTEPOFFSET_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETSTEPOFFSET_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETSTEPOFFSET___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETSTEPOFFSET___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETSTEPOFFSET___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
