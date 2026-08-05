#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETTIME_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1C11F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETTIME_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F1C0E50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETTIME_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1C0FE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1C1250)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETTIME___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1C12E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETTIME___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F1C1370)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETTIME___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1C1400)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityAudioSource
{
	inline static constexpr unsigned int SetTime_TypeDefinitionIndex = 34420;

	class SetTime : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* time; // 0x58
		::UnityEngine::GameObject* prevGameObject; // 0x60
		::UnityEngine::AudioSource* audioSource; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETTIME__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETTIME_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETTIME_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETTIME_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETTIME___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETTIME___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETTIME___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
