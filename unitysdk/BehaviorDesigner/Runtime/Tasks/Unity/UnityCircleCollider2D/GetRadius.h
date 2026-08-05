#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class CircleCollider2D; }
namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETRADIUS_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1E8650)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETRADIUS_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F1E8300)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETRADIUS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1E8490)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETRADIUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1E86A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETRADIUS___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F1E8730)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETRADIUS___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F1E87C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETRADIUS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1E8850)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityCircleCollider2D
{
	inline static constexpr unsigned int GetRadius_TypeDefinitionIndex = 34369;

	class GetRadius : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::GameObject* prevGameObject; // 0x58
		::UnityEngine::CircleCollider2D* circleCollider2D; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* storeValue; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETRADIUS__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETRADIUS_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETRADIUS_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETRADIUS_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETRADIUS___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETRADIUS___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYCIRCLECOLLIDER2D_GETRADIUS___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
