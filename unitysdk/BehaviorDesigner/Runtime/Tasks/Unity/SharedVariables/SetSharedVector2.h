#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedVector2; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDVECTOR2_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E8617F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDVECTOR2_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E861740)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDVECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x1E861850)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDVECTOR2___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E8618E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDVECTOR2___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E861970)

namespace BehaviorDesigner::Runtime::Tasks::Unity::SharedVariables
{
	inline static constexpr unsigned int SetSharedVector2_TypeDefinitionIndex = 34144;

	class SetSharedVector2 : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedVector2* targetValue; // 0x58
		::BehaviorDesigner::Runtime::SharedVector2* targetVariable; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDVECTOR2__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDVECTOR2_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDVECTOR2_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDVECTOR2___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_SETSHAREDVECTOR2___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
