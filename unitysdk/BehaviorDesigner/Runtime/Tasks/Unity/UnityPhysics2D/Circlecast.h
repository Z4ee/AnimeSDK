#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Space.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedVector2; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_CIRCLECAST_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E3E9210)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_CIRCLECAST_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E3E8880)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_CIRCLECAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3E92B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_CIRCLECAST___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E3E9370)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_CIRCLECAST___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E3E9400)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityPhysics2D
{
	inline static constexpr unsigned int Circlecast_TypeDefinitionIndex = 33599;

	class Circlecast : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* radius; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* originGameObject; // 0x60
		::BehaviorDesigner::Runtime::SharedVector2* storeHitPoint; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* storeHitObject; // 0x70
		::BehaviorDesigner::Runtime::SharedFloat* distance; // 0x78
		::BehaviorDesigner::Runtime::SharedFloat* storeHitDistance; // 0x80
		::BehaviorDesigner::Runtime::SharedVector2* originPosition; // 0x88
		::BehaviorDesigner::Runtime::SharedVector2* direction; // 0x90
		::BehaviorDesigner::Runtime::SharedVector2* storeHitNormal; // 0x98
		::UnityEngine::Space space; // 0xA0
		::UnityEngine::LayerMask layerMask; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_CIRCLECAST__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_CIRCLECAST_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_CIRCLECAST_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_CIRCLECAST___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_CIRCLECAST___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
