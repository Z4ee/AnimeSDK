#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }
namespace UnityEngine { class CircleCollider2D; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETOFFSET_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E10B830)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETOFFSET_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E10B4B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETOFFSET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E10B640)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E10B8A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETOFFSET___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E10B930)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETOFFSET___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E10B9C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETOFFSET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E10BA50)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityCircleCollider2D
{
	inline static constexpr unsigned int GetOffset_TypeDefinitionIndex = 33732;

	class GetOffset : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::CircleCollider2D* circleCollider2D; // 0x58
		::BehaviorDesigner::Runtime::SharedVector3* storeValue; // 0x60
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x68
		::UnityEngine::GameObject* prevGameObject; // 0x70

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
