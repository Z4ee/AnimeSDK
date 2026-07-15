#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace SRF::UI
{
	inline static constexpr unsigned int ResponsiveResize_Element_SizeDefinition_TypeDefinitionIndex = 33953;

	struct alignas(4) ResponsiveResize_Element_SizeDefinition
	{
		::System::Single ElementWidth; // 0x10
		::System::Single ThresholdWidth; // 0x14
	};
}
