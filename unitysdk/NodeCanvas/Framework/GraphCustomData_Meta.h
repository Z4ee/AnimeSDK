#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int GraphCustomData_Meta_TypeDefinitionIndex = 29645;

	struct alignas(8) GraphCustomData_Meta
	{
		::System::String* sVal; // 0x10
		::System::UInt32 iVal; // 0x18
	};
}
