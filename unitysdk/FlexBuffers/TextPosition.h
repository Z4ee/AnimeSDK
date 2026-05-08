#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define FLEXBUFFERS_TEXTPOSITION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9553C0)

namespace FlexBuffers
{
	inline static constexpr unsigned int TextPosition_TypeDefinitionIndex = 8769;

	struct alignas(8) TextPosition
	{
		::System::Int64 column; // 0x10
		::System::Int64 line; // 0x18

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEXBUFFERS_TEXTPOSITION_TOSTRING_OFFSET))(this);
		}
	};
}
