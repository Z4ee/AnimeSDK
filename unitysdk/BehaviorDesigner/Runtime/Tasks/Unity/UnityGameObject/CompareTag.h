#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_COMPARETAG_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F52F400)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_COMPARETAG_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F52F2B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_COMPARETAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1F52F480)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_COMPARETAG___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F52F510)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_COMPARETAG___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F52F5A0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityGameObject
{
	inline static constexpr unsigned int CompareTag_TypeDefinitionIndex = 34350;

	class CompareTag : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x50
		::BehaviorDesigner::Runtime::SharedString* tag; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_COMPARETAG__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_COMPARETAG_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_COMPARETAG_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_COMPARETAG___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYGAMEOBJECT_COMPARETAG___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
