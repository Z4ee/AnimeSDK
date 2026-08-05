#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace BehaviorDesigner::Runtime { class SharedVector2; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_DISTANCE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E473BA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_DISTANCE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E473A30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_DISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E473C00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_DISTANCE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E473C90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_DISTANCE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E473D20)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityVector2
{
	inline static constexpr unsigned int Distance_TypeDefinitionIndex = 34044;

	class Distance : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector2* secondVector2; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* storeResult; // 0x60
		::BehaviorDesigner::Runtime::SharedVector2* firstVector2; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_DISTANCE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_DISTANCE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_DISTANCE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_DISTANCE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYVECTOR2_DISTANCE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
