#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedVector2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody2D; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_MOVEPOSITION_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F76DCD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_MOVEPOSITION_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F76D930)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_MOVEPOSITION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F76DAC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_MOVEPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F76DD30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_MOVEPOSITION___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F76DDC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_MOVEPOSITION___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F76DE50)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_MOVEPOSITION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F76DEE0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityRigidbody2D
{
	inline static constexpr unsigned int MovePosition_TypeDefinitionIndex = 34165;

	class MovePosition : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x58
		::UnityEngine::Rigidbody2D* rigidbody2D; // 0x60
		::BehaviorDesigner::Runtime::SharedVector2* position; // 0x68
		::UnityEngine::GameObject* prevGameObject; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_MOVEPOSITION__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_MOVEPOSITION_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_MOVEPOSITION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_MOVEPOSITION_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_MOVEPOSITION___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_MOVEPOSITION___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYRIGIDBODY2D_MOVEPOSITION___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
