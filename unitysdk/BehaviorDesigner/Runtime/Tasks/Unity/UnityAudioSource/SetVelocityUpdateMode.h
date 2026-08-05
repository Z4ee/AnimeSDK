#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/AudioVelocityUpdateMode.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETVELOCITYUPDATEMODE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E46CE60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETVELOCITYUPDATEMODE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E46CB20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETVELOCITYUPDATEMODE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E46CCB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETVELOCITYUPDATEMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E46CEB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETVELOCITYUPDATEMODE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E46CF40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETVELOCITYUPDATEMODE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E46CFD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETVELOCITYUPDATEMODE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E46D060)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityAudioSource
{
	inline static constexpr unsigned int SetVelocityUpdateMode_TypeDefinitionIndex = 34421;

	class SetVelocityUpdateMode : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::AudioSource* audioSource; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::UnityEngine::GameObject* prevGameObject; // 0x68
		::UnityEngine::AudioVelocityUpdateMode velocityUpdateMode; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETVELOCITYUPDATEMODE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETVELOCITYUPDATEMODE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETVELOCITYUPDATEMODE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETVELOCITYUPDATEMODE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETVELOCITYUPDATEMODE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETVELOCITYUPDATEMODE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETVELOCITYUPDATEMODE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
