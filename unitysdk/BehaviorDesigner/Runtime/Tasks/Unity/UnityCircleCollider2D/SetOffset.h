#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }
namespace UnityEngine { class CircleCollider2D; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETOFFSET_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F808640)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETOFFSET_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F808290)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETOFFSET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F808420)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8086B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETOFFSET___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F808740)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETOFFSET___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F8087D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETOFFSET___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F808860)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityCircleCollider2D
{
	inline static constexpr unsigned int SetOffset_TypeDefinitionIndex = 34370;

	class SetOffset : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector3* offset; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::UnityEngine::CircleCollider2D* circleCollider2D; // 0x68
		::UnityEngine::GameObject* prevGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETOFFSET__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETOFFSET_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETOFFSET_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETOFFSET_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETOFFSET___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETOFFSET___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_SETOFFSET___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
