#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/LogMessageType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace InControl
{
	inline static constexpr unsigned int LogMessage_TypeDefinitionIndex = 38677;

	struct alignas(8) LogMessage
	{
		::System::String* text; // 0x10
		::InControl::LogMessageType type; // 0x18
	};
}
