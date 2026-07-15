#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_PREVIOUSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x38F04C0)

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int SimpleCollator_PreviousInfo_TypeDefinitionIndex = 41;

	struct alignas(8) SimpleCollator_PreviousInfo
	{
		::System::Int32 Code; // 0x10
		::System::Byte* SortKey; // 0x18

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_GLOBALIZATION_UNICODE_SIMPLECOLLATOR_PREVIOUSINFO__CTOR_OFFSET))(this, a1);
		}
	};
}
