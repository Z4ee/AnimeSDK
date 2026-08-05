#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETMUTE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7CACC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETMUTE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F7CA970)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETMUTE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7CAB00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETMUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7CAD10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETMUTE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7CADA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETMUTE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F7CAE30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETMUTE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7CAEC0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityAudioSource
{
	inline static constexpr unsigned int GetMute_TypeDefinitionIndex = 34394;

	class GetMute : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::AudioSource* audioSource; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::BehaviorDesigner::Runtime::SharedBool* storeValue; // 0x68
		::UnityEngine::GameObject* prevGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETMUTE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETMUTE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETMUTE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETMUTE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETMUTE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETMUTE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_GETMUTE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
