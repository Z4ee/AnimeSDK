#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETTIMESCALE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E5FEB30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETTIMESCALE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E5FEAC0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETTIMESCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5FEB80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETTIMESCALE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E5FEC10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETTIMESCALE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E5FECA0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityTime
{
	inline static constexpr unsigned int GetTimeScale_TypeDefinitionIndex = 33464;

	class GetTimeScale : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* storeResult; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETTIMESCALE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETTIMESCALE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETTIMESCALE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETTIMESCALE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYTIME_GETTIMESCALE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
