#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }
namespace UnityEngine { class CircleCollider2D; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETOFFSET_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F52E9D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETOFFSET_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F52E650)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETOFFSET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F52E7E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1F52EA40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETOFFSET___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F52EAD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETOFFSET___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F52EB60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETOFFSET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F52EBF0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityCircleCollider2D
{
	inline static constexpr unsigned int GetOffset_TypeDefinitionIndex = 34368;

	class GetOffset : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::GameObject* prevGameObject; // 0x58
		::UnityEngine::CircleCollider2D* circleCollider2D; // 0x60
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x68
		::BehaviorDesigner::Runtime::SharedVector3* storeValue; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETOFFSET__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETOFFSET_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETOFFSET_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETOFFSET_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETOFFSET___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETOFFSET___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETOFFSET___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
