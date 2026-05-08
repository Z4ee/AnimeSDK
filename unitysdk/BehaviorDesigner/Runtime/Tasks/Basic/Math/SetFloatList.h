#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETFLOATLIST_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AD30B40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETFLOATLIST_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AD309D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETFLOATLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD30C40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETFLOATLIST___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AD30CD0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETFLOATLIST___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1AD30D60)

namespace BehaviorDesigner::Runtime::Tasks::Basic::Math
{
	inline static constexpr unsigned int SetFloatList_TypeDefinitionIndex = 31832;

	class SetFloatList : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>* floatValueList; // 0x58
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedFloat*>* storeValueList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETFLOATLIST__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETFLOATLIST_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETFLOATLIST_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETFLOATLIST___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETFLOATLIST___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
