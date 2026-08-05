#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class CharacterController; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETHEIGHT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7CC7E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETHEIGHT_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F7CC490)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETHEIGHT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7CC620)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETHEIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7CC830)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETHEIGHT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7CC8C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETHEIGHT___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F7CC950)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETHEIGHT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7CC9E0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityCharacterController
{
	inline static constexpr unsigned int GetHeight_TypeDefinitionIndex = 34470;

	class GetHeight : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::CharacterController* characterController; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* storeValue; // 0x60
		::UnityEngine::GameObject* prevGameObject; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETHEIGHT__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETHEIGHT_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETHEIGHT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETHEIGHT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETHEIGHT___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETHEIGHT___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCHARACTERCONTROLLER_GETHEIGHT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
