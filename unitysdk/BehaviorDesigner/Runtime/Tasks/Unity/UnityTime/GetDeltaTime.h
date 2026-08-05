#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETDELTATIME_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8FE480)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETDELTATIME_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8FE410)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETDELTATIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8FE4D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETDELTATIME___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8FE560)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETDELTATIME___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8FE5F0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityTime
{
	inline static constexpr unsigned int GetDeltaTime_TypeDefinitionIndex = 34097;

	class GetDeltaTime : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* storeResult; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETDELTATIME__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETDELTATIME_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETDELTATIME_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETDELTATIME___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETDELTATIME___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
