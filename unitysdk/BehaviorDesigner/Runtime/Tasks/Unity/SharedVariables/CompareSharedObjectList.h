#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedObjectList; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_COMPARESHAREDOBJECTLIST_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F804A80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_COMPARESHAREDOBJECTLIST_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F804530)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_COMPARESHAREDOBJECTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1F804AD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_COMPARESHAREDOBJECTLIST___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F804B60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_COMPARESHAREDOBJECTLIST___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F804BF0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::SharedVariables
{
	inline static constexpr unsigned int CompareSharedObjectList_TypeDefinitionIndex = 34122;

	class CompareSharedObjectList : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedObjectList* variable; // 0x50
		::BehaviorDesigner::Runtime::SharedObjectList* compareTo; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_COMPARESHAREDOBJECTLIST__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_COMPARESHAREDOBJECTLIST_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_COMPARESHAREDOBJECTLIST_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_COMPARESHAREDOBJECTLIST___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_SHAREDVARIABLES_COMPARESHAREDOBJECTLIST___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
