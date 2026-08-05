#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedString; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_REPLACE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E472BD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_REPLACE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E4729E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_REPLACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E472C70)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_REPLACE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E472D00)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_REPLACE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E472D90)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityString
{
	inline static constexpr unsigned int Replace_TypeDefinitionIndex = 34109;

	class Replace : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* storeResult; // 0x58
		::BehaviorDesigner::Runtime::SharedString* newString; // 0x60
		::BehaviorDesigner::Runtime::SharedString* targetString; // 0x68
		::BehaviorDesigner::Runtime::SharedString* oldString; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_REPLACE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_REPLACE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_REPLACE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_REPLACE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_REPLACE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
