#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace BehaviorDesigner::Runtime { class SharedVector2; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_LINECAST_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F833A70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_LINECAST_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8338D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_LINECAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1F833AE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_LINECAST___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F833B80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_LINECAST___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F833C10)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityPhysics2D
{
	inline static constexpr unsigned int Linecast_TypeDefinitionIndex = 34236;

	class Linecast : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector2* endPosition; // 0x58
		::BehaviorDesigner::Runtime::SharedVector2* startPosition; // 0x60
		::UnityEngine::LayerMask layerMask; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_LINECAST__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_LINECAST_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_LINECAST_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_LINECAST___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS2D_LINECAST___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
