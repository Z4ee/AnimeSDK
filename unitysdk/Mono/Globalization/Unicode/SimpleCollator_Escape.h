#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace Mono::Globalization::Unicode
{
	inline static constexpr unsigned int SimpleCollator_Escape_TypeDefinitionIndex = 42;

	struct alignas(8) SimpleCollator_Escape
	{
		::System::String* Source; // 0x10
		::System::Int32 Index; // 0x18
		::System::Int32 Start; // 0x1C
		::System::Int32 End; // 0x20
		::System::Int32 Optional; // 0x24
	};
}
