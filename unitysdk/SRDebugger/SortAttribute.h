#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SRDEBUGGER_SORTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E87330)

namespace SRDebugger
{
	inline static constexpr unsigned int SortAttribute_TypeDefinitionIndex = 35327;

	class SortAttribute : public ::System::Attribute
	{
	public:
		::System::Int32 SortPriority; // 0x10

		::System::Void _ctor(::System::Int32 priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_SORTATTRIBUTE__CTOR_OFFSET))(this, priority);
		}
	};
}
