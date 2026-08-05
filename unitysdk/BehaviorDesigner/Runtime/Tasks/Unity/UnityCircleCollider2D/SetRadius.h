#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class CircleCollider2D; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETRADIUS_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F52F020)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETRADIUS_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F52EC80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETRADIUS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F52EE10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETRADIUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F52F070)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETRADIUS___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F52F100)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETRADIUS___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F52F190)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETRADIUS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F52F220)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityCircleCollider2D
{
	inline static constexpr unsigned int SetRadius_TypeDefinitionIndex = 34371;

	class SetRadius : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::GameObject* prevGameObject; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::UnityEngine::CircleCollider2D* circleCollider2D; // 0x68
		::BehaviorDesigner::Runtime::SharedFloat* radius; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETRADIUS__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETRADIUS_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETRADIUS_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETRADIUS_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETRADIUS___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETRADIUS___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETRADIUS___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
