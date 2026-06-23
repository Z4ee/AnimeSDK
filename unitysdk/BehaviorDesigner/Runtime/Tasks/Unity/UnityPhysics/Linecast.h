#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace BehaviorDesigner::Runtime { class SharedVector3; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_LINECAST_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E5FD7B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_LINECAST_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E5FD580)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_LINECAST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5FD840)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_LINECAST___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E5FD8E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_LINECAST___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E5FD970)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityPhysics
{
	inline static constexpr unsigned int Linecast_TypeDefinitionIndex = 33602;

	class Linecast : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector3* endPosition; // 0x58
		::BehaviorDesigner::Runtime::SharedVector3* startPosition; // 0x60
		::UnityEngine::LayerMask layerMask; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_LINECAST__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_LINECAST_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_LINECAST_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_LINECAST___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYPHYSICS_LINECAST___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
