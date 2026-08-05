#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class AudioSource; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETSPREAD_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F608F60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETSPREAD_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F608BC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETSPREAD_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F608D50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETSPREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1F608FC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETSPREAD___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F609050)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETSPREAD___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F6090E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETSPREAD___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F609170)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityAudioSource
{
	inline static constexpr unsigned int SetSpread_TypeDefinitionIndex = 34419;

	class SetSpread : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::AudioSource* audioSource; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* spread; // 0x68
		::UnityEngine::GameObject* prevGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETSPREAD__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETSPREAD_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETSPREAD_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETSPREAD_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETSPREAD___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETSPREAD___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYAUDIOSOURCE_SETSPREAD___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
