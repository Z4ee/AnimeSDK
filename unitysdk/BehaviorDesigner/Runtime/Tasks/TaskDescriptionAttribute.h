#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKDESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1E5BDDF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKDESCRIPTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BDE00)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int TaskDescriptionAttribute_TypeDefinitionIndex = 33329;

	class TaskDescriptionAttribute : public ::System::Attribute
	{
	public:
		::System::String* mDescription; // 0x10

		::System::Void _ctor(::System::String* description)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASKDESCRIPTIONATTRIBUTE__CTOR_OFFSET))(this, description);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASKDESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET))(this);
		}
	};
}
