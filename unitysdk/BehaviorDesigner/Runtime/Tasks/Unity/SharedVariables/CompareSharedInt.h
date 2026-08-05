#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_COMPARESHAREDINT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F804320)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_COMPARESHAREDINT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F804230)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_COMPARESHAREDINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F804380)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_COMPARESHAREDINT___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F804410)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_COMPARESHAREDINT___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8044A0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::SharedVariables
{
	inline static constexpr unsigned int CompareSharedInt_TypeDefinitionIndex = 34120;

	class CompareSharedInt : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* compareTo; // 0x50
		::BehaviorDesigner::Runtime::SharedInt* variable; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_COMPARESHAREDINT__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_COMPARESHAREDINT_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_COMPARESHAREDINT_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_COMPARESHAREDINT___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_COMPARESHAREDINT___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
