#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_SETLOCALSCALE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F613FF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_SETLOCALSCALE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F613C20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_SETLOCALSCALE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F613DB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_SETLOCALSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F614060)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_SETLOCALSCALE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F6140F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_SETLOCALSCALE___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F614180)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_SETLOCALSCALE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F614210)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityTransform
{
	inline static constexpr unsigned int SetLocalScale_TypeDefinitionIndex = 34084;

	class SetLocalScale : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::Transform* targetTransform; // 0x58
		::UnityEngine::GameObject* prevGameObject; // 0x60
		::BehaviorDesigner::Runtime::SharedVector3* localScale; // 0x68
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_SETLOCALSCALE__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_SETLOCALSCALE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_SETLOCALSCALE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_SETLOCALSCALE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_SETLOCALSCALE___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_SETLOCALSCALE___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTRANSFORM_SETLOCALSCALE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
