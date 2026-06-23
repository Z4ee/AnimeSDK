#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLAYERMASK_SETLAYER_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E196E80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLAYERMASK_SETLAYER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E196D20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLAYERMASK_SETLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E196F00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLAYERMASK_SETLAYER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E196FC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLAYERMASK_SETLAYER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E197000)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityLayerMask
{
	inline static constexpr unsigned int SetLayer_TypeDefinitionIndex = 33697;

	class SetLayer : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x58
		::BehaviorDesigner::Runtime::SharedString* layerName; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLAYERMASK_SETLAYER__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLAYERMASK_SETLAYER_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLAYERMASK_SETLAYER_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLAYERMASK_SETLAYER___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLAYERMASK_SETLAYER___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
