#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int BlurParam_TypeDefinitionIndex = 36327;

	struct alignas(4) BlurParam
	{
		::System::Single BlurScale; // 0x10
		::System::Single Brightness; // 0x14
	};
}
