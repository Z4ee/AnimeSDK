#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Sirenix::Serialization { class IFormatterLocator; }

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int FormatterLocator_FormatterLocatorInfo_TypeDefinitionIndex = 7436;

	struct alignas(8) FormatterLocator_FormatterLocatorInfo
	{
		::Sirenix::Serialization::IFormatterLocator* LocatorInstance; // 0x10
		::System::Int32 Priority; // 0x18
	};
}
