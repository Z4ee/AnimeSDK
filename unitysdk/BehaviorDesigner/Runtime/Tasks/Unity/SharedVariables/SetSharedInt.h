#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDINT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8F76C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDINT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8F7610)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8F7720)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDINT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8F77B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDINT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8F7840)

namespace BehaviorDesigner::Runtime::Tasks::Unity::SharedVariables
{
	inline static constexpr unsigned int SetSharedInt_TypeDefinitionIndex = 34136;

	class SetSharedInt : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* targetValue; // 0x58
		::BehaviorDesigner::Runtime::SharedInt* targetVariable; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDINT__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDINT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDINT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDINT___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDINT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
