#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedVector2; }
namespace UnityEngine { class BoxCollider2D; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_GETSIZE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F609BA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_GETSIZE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F609840)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_GETSIZE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F6099D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_GETSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F609C00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_GETSIZE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F609C90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_GETSIZE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F609D20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_GETSIZE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F609DB0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityBoxCollider2D
{
	inline static constexpr unsigned int GetSize_TypeDefinitionIndex = 34380;

	class GetSize : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::BoxCollider2D* boxCollider2D; // 0x58
		::BehaviorDesigner::Runtime::SharedVector2* storeValue; // 0x60
		::UnityEngine::GameObject* prevGameObject; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_GETSIZE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_GETSIZE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_GETSIZE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_GETSIZE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_GETSIZE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_GETSIZE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYBOXCOLLIDER2D_GETSIZE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
