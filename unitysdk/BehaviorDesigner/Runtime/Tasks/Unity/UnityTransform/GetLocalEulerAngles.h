#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETLOCALEULERANGLES_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8FEAC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETLOCALEULERANGLES_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F8FE680)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETLOCALEULERANGLES_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8FE810)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETLOCALEULERANGLES__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8FEB30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETLOCALEULERANGLES___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8FEBC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETLOCALEULERANGLES___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F8FEC50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETLOCALEULERANGLES___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8FECE0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityTransform
{
	inline static constexpr unsigned int GetLocalEulerAngles_TypeDefinitionIndex = 34066;

	class GetLocalEulerAngles : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::Transform* targetTransform; // 0x58
		::UnityEngine::GameObject* prevGameObject; // 0x60
		::BehaviorDesigner::Runtime::SharedVector3* storeValue; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETLOCALEULERANGLES__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETLOCALEULERANGLES_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETLOCALEULERANGLES_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETLOCALEULERANGLES_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETLOCALEULERANGLES___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETLOCALEULERANGLES___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_GETLOCALEULERANGLES___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
