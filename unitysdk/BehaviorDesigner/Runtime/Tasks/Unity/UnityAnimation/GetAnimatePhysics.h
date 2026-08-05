#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_GETANIMATEPHYSICS_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8055C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_GETANIMATEPHYSICS_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F805270)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_GETANIMATEPHYSICS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F805400)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_GETANIMATEPHYSICS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F805620)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_GETANIMATEPHYSICS___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8056B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_GETANIMATEPHYSICS___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F805740)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_GETANIMATEPHYSICS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8057D0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityAnimation
{
	inline static constexpr unsigned int GetAnimatePhysics_TypeDefinitionIndex = 34427;

	class GetAnimatePhysics : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* storeValue; // 0x58
		::UnityEngine::Animation* animation; // 0x60
		::UnityEngine::GameObject* prevGameObject; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_GETANIMATEPHYSICS__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_GETANIMATEPHYSICS_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_GETANIMATEPHYSICS_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_GETANIMATEPHYSICS_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_GETANIMATEPHYSICS___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_GETANIMATEPHYSICS___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYANIMATION_GETANIMATEPHYSICS___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
