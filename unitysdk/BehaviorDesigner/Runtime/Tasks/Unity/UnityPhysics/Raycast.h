#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Space.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_RAYCAST_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9E4C70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_RAYCAST_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9E4420)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_RAYCAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9E4D30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_RAYCAST___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9E4DF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_RAYCAST___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9E4E80)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityPhysics
{
	inline static constexpr unsigned int Raycast_TypeDefinitionIndex = 34239;

	class Raycast : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* originGameObject; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* storeHitObject; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* distance; // 0x68
		::BehaviorDesigner::Runtime::SharedFloat* storeHitDistance; // 0x70
		::BehaviorDesigner::Runtime::SharedVector3* storeHitPoint; // 0x78
		::BehaviorDesigner::Runtime::SharedVector3* direction; // 0x80
		::BehaviorDesigner::Runtime::SharedVector3* originPosition; // 0x88
		::BehaviorDesigner::Runtime::SharedVector3* storeHitNormal; // 0x90
		::UnityEngine::LayerMask layerMask; // 0x98
		::UnityEngine::Space space; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_RAYCAST__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_RAYCAST_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_RAYCAST_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_RAYCAST___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_RAYCAST___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
