#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_SETTIMESCALE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AD3BA40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_SETTIMESCALE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AD3B9A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_SETTIMESCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD3BAA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_SETTIMESCALE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AD3BB30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_SETTIMESCALE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AD3BBC0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityTime
{
	inline static constexpr unsigned int SetTimeScale_TypeDefinitionIndex = 31914;

	class SetTimeScale : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* timeScale; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_SETTIMESCALE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_SETTIMESCALE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_SETTIMESCALE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_SETTIMESCALE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_SETTIMESCALE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
