#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Space.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedVector2; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_RAYCAST_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F80A970)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_RAYCAST_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F80A070)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_RAYCAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1F80AA00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_RAYCAST___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F80AAC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_RAYCAST___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F80AB50)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityPhysics2D
{
	inline static constexpr unsigned int Raycast_TypeDefinitionIndex = 34237;

	class Raycast : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector2* direction; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* originGameObject; // 0x60
		::BehaviorDesigner::Runtime::SharedVector2* storeHitPoint; // 0x68
		::BehaviorDesigner::Runtime::SharedVector2* storeHitNormal; // 0x70
		::BehaviorDesigner::Runtime::SharedFloat* distance; // 0x78
		::BehaviorDesigner::Runtime::SharedVector2* originPosition; // 0x80
		::BehaviorDesigner::Runtime::SharedGameObject* storeHitObject; // 0x88
		::BehaviorDesigner::Runtime::SharedFloat* storeHitDistance; // 0x90
		::UnityEngine::LayerMask layerMask; // 0x98
		::UnityEngine::Space space; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_RAYCAST__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_RAYCAST_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_RAYCAST_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_RAYCAST___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_RAYCAST___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
