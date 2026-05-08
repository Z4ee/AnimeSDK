#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLAYERMASK_GETLAYER_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AD37160)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLAYERMASK_GETLAYER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AD37040)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLAYERMASK_GETLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD371E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLAYERMASK_GETLAYER___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AD37270)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLAYERMASK_GETLAYER___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AD37300)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityLayerMask
{
	inline static constexpr unsigned int GetLayer_TypeDefinitionIndex = 32145;

	class GetLayer : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* storeResult; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLAYERMASK_GETLAYER__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLAYERMASK_GETLAYER_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLAYERMASK_GETLAYER_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLAYERMASK_GETLAYER___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYLAYERMASK_GETLAYER___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
