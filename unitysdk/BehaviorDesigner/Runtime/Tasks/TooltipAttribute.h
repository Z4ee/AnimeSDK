#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_TOOLTIPATTRIBUTE_GET_TOOLTIP_OFFSET UNITYSDK_OFFSET(0x1EC8C460)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_TOOLTIPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8C470)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int TooltipAttribute_TypeDefinitionIndex = 33961;

	class TooltipAttribute : public ::System::Attribute
	{
	public:
		::System::String* mTooltip; // 0x10

		::System::Void _ctor(::System::String* tooltip)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TOOLTIPATTRIBUTE__CTOR_OFFSET))(this, tooltip);
		}

		::System::String* get_Tooltip()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_TOOLTIPATTRIBUTE_GET_TOOLTIP_OFFSET))(this);
		}
	};
}
