#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedString; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_SETSTRING_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E472F10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_SETSTRING_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E472E20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_SETSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1E472F90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_SETSTRING___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E473020)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_SETSTRING___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E4730B0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityString
{
	inline static constexpr unsigned int SetString_TypeDefinitionIndex = 34110;

	class SetString : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* variable; // 0x58
		::BehaviorDesigner::Runtime::SharedString* value; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_SETSTRING__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_SETSTRING_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_SETSTRING_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_SETSTRING___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_SETSTRING___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
