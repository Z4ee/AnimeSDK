#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Space.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_SPHERECAST_ONRESET_OFFSET UNITYSDK_OFFSET(0x1D4B1B10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_SPHERECAST_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D4B1180)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_SPHERECAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B1BE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_SPHERECAST___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1D4B1CA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_SPHERECAST___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D4B1D30)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityPhysics
{
	inline static constexpr unsigned int SphereCast_TypeDefinitionIndex = 33604;

	class SphereCast : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* storeHitObject; // 0x58
		::BehaviorDesigner::Runtime::SharedVector3* originPosition; // 0x60
		::BehaviorDesigner::Runtime::SharedVector3* storeHitNormal; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* originGameObject; // 0x70
		::BehaviorDesigner::Runtime::SharedVector3* storeHitPoint; // 0x78
		::BehaviorDesigner::Runtime::SharedFloat* storeHitDistance; // 0x80
		::BehaviorDesigner::Runtime::SharedFloat* distance; // 0x88
		::BehaviorDesigner::Runtime::SharedVector3* direction; // 0x90
		::BehaviorDesigner::Runtime::SharedFloat* radius; // 0x98
		::UnityEngine::Space space; // 0xA0
		::UnityEngine::LayerMask layerMask; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_SPHERECAST__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_SPHERECAST_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_SPHERECAST_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_SPHERECAST___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_SPHERECAST___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
