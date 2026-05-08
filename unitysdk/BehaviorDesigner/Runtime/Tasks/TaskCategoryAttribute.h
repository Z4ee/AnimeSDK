#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKCATEGORYATTRIBUTE_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1C1B7A80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKCATEGORYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B7A90)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int TaskCategoryAttribute_TypeDefinitionIndex = 31777;

	class TaskCategoryAttribute : public ::System::Attribute
	{
	public:
		::System::String* mCategory; // 0x10

		::System::Void _ctor(::System::String* category)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASKCATEGORYATTRIBUTE__CTOR_OFFSET))(this, category);
		}

		::System::String* get_Category()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASKCATEGORYATTRIBUTE_GET_CATEGORY_OFFSET))(this);
		}
	};
}
