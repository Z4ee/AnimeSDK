#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Type; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int FormatterLocator_FormatterInfo_TypeDefinitionIndex = 7435;

	struct alignas(8) FormatterLocator_FormatterInfo
	{
		::System::Type* FormatterType; // 0x10
		::System::Type* TargetType; // 0x18
		::System::Boolean AskIfCanFormatTypes; // 0x20
		::System::Int32 Priority; // 0x24
	};
}
