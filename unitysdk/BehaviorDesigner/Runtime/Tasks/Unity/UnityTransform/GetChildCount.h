#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedInt; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETCHILDCOUNT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E8686B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETCHILDCOUNT_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E868360)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETCHILDCOUNT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E8684F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETCHILDCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E868700)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETCHILDCOUNT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E868790)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETCHILDCOUNT___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1E868820)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETCHILDCOUNT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E8688B0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityTransform
{
	inline static constexpr unsigned int GetChildCount_TypeDefinitionIndex = 34063;

	class GetChildCount : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::GameObject* prevGameObject; // 0x58
		::BehaviorDesigner::Runtime::SharedInt* storeValue; // 0x60
		::UnityEngine::Transform* targetTransform; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETCHILDCOUNT__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETCHILDCOUNT_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETCHILDCOUNT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETCHILDCOUNT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETCHILDCOUNT___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETCHILDCOUNT___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETCHILDCOUNT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
