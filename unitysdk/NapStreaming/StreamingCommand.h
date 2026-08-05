#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapStreaming/StreamingCommandFlag.h"
#include "unitysdk/System/ValueType.h"

namespace NapStreaming
{
	inline static constexpr unsigned int StreamingCommand_TypeDefinitionIndex = 68129;

	struct alignas(4) StreamingCommand
	{
		::NapStreaming::StreamingCommandFlag cmd; // 0x10
		::System::Int32 gridIndex; // 0x14
	};
}
