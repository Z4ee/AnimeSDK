#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETHEIGHT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8073E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETHEIGHT_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F807090)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETHEIGHT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F807220)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETHEIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F807430)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETHEIGHT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8074C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETHEIGHT___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F807550)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETHEIGHT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8075E0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityCapsuleCollider
{
	inline static constexpr unsigned int GetHeight_TypeDefinitionIndex = 34374;

	class GetHeight : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x58
		::UnityEngine::CapsuleCollider* capsuleCollider; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* storeValue; // 0x68
		::UnityEngine::GameObject* prevGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETHEIGHT__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETHEIGHT_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETHEIGHT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETHEIGHT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETHEIGHT___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETHEIGHT___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCAPSULECOLLIDER_GETHEIGHT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
