#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define PARADOXNOTION_DESIGN_EXECUTIONPRIORITYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A9CC0)

namespace ParadoxNotion::Design
{
	inline static constexpr unsigned int ExecutionPriorityAttribute_TypeDefinitionIndex = 26588;

	class ExecutionPriorityAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 priority; // 0x10

		::System::Void _ctor(::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_DESIGN_EXECUTIONPRIORITYATTRIBUTE__CTOR_OFFSET))(this, priority);
		}
	};
}
