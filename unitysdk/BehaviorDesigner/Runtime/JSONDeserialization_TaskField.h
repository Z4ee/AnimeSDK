#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace BehaviorDesigner::Runtime::Tasks { class Task; }
namespace System::Reflection { class FieldInfo; }

#define BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_TASKFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x346F70)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int JSONDeserialization_TaskField_TypeDefinitionIndex = 33883;

	struct alignas(8) JSONDeserialization_TaskField
	{
		::BehaviorDesigner::Runtime::Tasks::Task* task; // 0x10
		::System::Reflection::FieldInfo* fieldInfo; // 0x18

		::System::Void _ctor(::BehaviorDesigner::Runtime::Tasks::Task* t, ::System::Reflection::FieldInfo* f)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::Task*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_JSONDESERIALIZATION_TASKFIELD__CTOR_OFFSET))(this, t, f);
		}
	};
}
