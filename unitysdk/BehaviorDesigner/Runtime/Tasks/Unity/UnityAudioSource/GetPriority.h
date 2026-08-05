#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETPRIORITY_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7CB2A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETPRIORITY_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F7CAF50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETPRIORITY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7CB0E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7CB300)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETPRIORITY___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7CB390)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETPRIORITY___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F7CB420)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETPRIORITY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7CB4B0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityAudioSource
{
	inline static constexpr unsigned int GetPriority_TypeDefinitionIndex = 34396;

	class GetPriority : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::AudioSource* audioSource; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::BehaviorDesigner::Runtime::SharedInt* storeValue; // 0x68
		::UnityEngine::GameObject* prevGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETPRIORITY__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETPRIORITY_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETPRIORITY_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETPRIORITY_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETPRIORITY___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETPRIORITY___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETPRIORITY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
