#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace Foundation
{
	inline static constexpr unsigned int MyLoggerSwitcher_MyLoggerSwitcherItem_TypeDefinitionIndex = 8243;

	struct alignas(8) MyLoggerSwitcher_MyLoggerSwitcherItem
	{
		::System::String* LoggerString; // 0x10
		::System::Boolean IsEnable; // 0x18
	};
}
