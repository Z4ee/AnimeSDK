#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DynamicResolutionHeuristicProxy_FrameTimeInfo_TypeDefinitionIndex = 36174;

	struct alignas(4) DynamicResolutionHeuristicProxy_FrameTimeInfo
	{
		::System::Single CPUTime; // 0x10
		::System::Single GPUTime; // 0x14
		::System::Single RenderScale; // 0x18
	};
}
