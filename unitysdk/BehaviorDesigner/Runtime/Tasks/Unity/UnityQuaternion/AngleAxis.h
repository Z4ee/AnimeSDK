#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedQuaternion; }
namespace BehaviorDesigner::Runtime { class SharedVector3; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_ANGLEAXIS_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7CF610)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_ANGLEAXIS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7CF460)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_ANGLEAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7CF6A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_ANGLEAXIS___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F7CF730)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_ANGLEAXIS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F7CF7C0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityQuaternion
{
	inline static constexpr unsigned int AngleAxis_TypeDefinitionIndex = 34215;

	class AngleAxis : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector3* axis; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* degrees; // 0x60
		::BehaviorDesigner::Runtime::SharedQuaternion* storeResult; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_ANGLEAXIS__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_ANGLEAXIS_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_ANGLEAXIS_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_ANGLEAXIS___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYQUATERNION_ANGLEAXIS___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
