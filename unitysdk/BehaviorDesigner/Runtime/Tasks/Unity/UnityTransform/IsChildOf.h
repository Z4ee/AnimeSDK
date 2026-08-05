#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedTransform; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_ISCHILDOF_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F837410)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_ISCHILDOF_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F837080)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_ISCHILDOF_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F837210)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_ISCHILDOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1F837460)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_ISCHILDOF___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8374F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_ISCHILDOF___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F837580)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_ISCHILDOF___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F837610)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityTransform
{
	inline static constexpr unsigned int IsChildOf_TypeDefinitionIndex = 34075;

	class IsChildOf : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedTransform* transformName; // 0x50
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x58
		::UnityEngine::Transform* targetTransform; // 0x60
		::UnityEngine::GameObject* prevGameObject; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_ISCHILDOF__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_ISCHILDOF_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_ISCHILDOF_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_ISCHILDOF_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_ISCHILDOF___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_ISCHILDOF___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_ISCHILDOF___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
