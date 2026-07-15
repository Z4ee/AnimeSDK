#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace SRDebugger::Services
{
	inline static constexpr unsigned int ProfilerFrame_TypeDefinitionIndex = 36517;

	struct alignas(8) ProfilerFrame
	{
		::System::Double FrameTime; // 0x10
		::System::Double OtherTime; // 0x18
		::System::Double RenderTime; // 0x20
		::System::Double UpdateTime; // 0x28
	};
}
