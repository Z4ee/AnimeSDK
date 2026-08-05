#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKICONATTRIBUTE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1F8F7300)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TASKICONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8F7310)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int TaskIconAttribute_TypeDefinitionIndex = 33962;

	class TaskIconAttribute : public ::System::Attribute
	{
	public:
		::System::String* mIconPath; // 0x10

		::System::Void _ctor(::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASKICONATTRIBUTE__CTOR_OFFSET))(this, iconPath);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TASKICONATTRIBUTE_GET_ICONPATH_OFFSET))(this);
		}
	};
}
