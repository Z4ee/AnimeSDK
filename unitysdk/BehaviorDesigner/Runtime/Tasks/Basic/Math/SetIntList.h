#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETINTLIST_ONRESET_OFFSET UNITYSDK_OFFSET(0x1D1104A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETINTLIST_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D110330)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETINTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D110590)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETINTLIST___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1D110620)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETINTLIST___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D1106B0)

namespace BehaviorDesigner::Runtime::Tasks::Basic::Math
{
	inline static constexpr unsigned int SetIntList_TypeDefinitionIndex = 33384;

	class SetIntList : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedInt*>* intValueList; // 0x58
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedInt*>* storeValueList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETINTLIST__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETINTLIST_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETINTLIST_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETINTLIST___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETINTLIST___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
