#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKNAMEATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E1F8C60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKNAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F8C70)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int TaskNameAttribute_TypeDefinitionIndex = 33330;

	class TaskNameAttribute : public ::System::Attribute
	{
	public:
		::System::String* mName; // 0x10

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASKNAMEATTRIBUTE__CTOR_OFFSET))(this, name);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASKNAMEATTRIBUTE_GET_NAME_OFFSET))(this);
		}
	};
}
