#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMBOOL_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E192BA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1E192C10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMBOOL___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E192CA0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int RandomBool_TypeDefinitionIndex = 33671;

	class RandomBool : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedBool* storeResult; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMBOOL__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMBOOL_ONUPDATE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_RANDOMBOOL___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
