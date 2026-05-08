#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedTransform; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SHAREDGAMEOBJECTTOTRANSFORM_ONRESET_OFFSET UNITYSDK_OFFSET(0x1BA7BF50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SHAREDGAMEOBJECTTOTRANSFORM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BA7BC70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SHAREDGAMEOBJECTTOTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA7BFA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SHAREDGAMEOBJECTTOTRANSFORM___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1BA7C030)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SHAREDGAMEOBJECTTOTRANSFORM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1BA7C0C0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::SharedVariables
{
	inline static constexpr unsigned int SharedGameObjectToTransform_TypeDefinitionIndex = 31960;

	class SharedGameObjectToTransform : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedTransform* sharedTransform; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* sharedGameObject; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SHAREDGAMEOBJECTTOTRANSFORM__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SHAREDGAMEOBJECTTOTRANSFORM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SHAREDGAMEOBJECTTOTRANSFORM_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SHAREDGAMEOBJECTTOTRANSFORM___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SHAREDGAMEOBJECTTOTRANSFORM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
