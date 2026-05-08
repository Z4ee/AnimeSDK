#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int AimAssistCrossHairMoveRatioParam_TypeDefinitionIndex = 65713;

	struct alignas(4) AimAssistCrossHairMoveRatioParam
	{
		::System::Single MouseAimAssistRatio; // 0x10
		::System::Single KeyboardAimAssistRatio; // 0x14
		::System::Single GamePadAimAssistRatio; // 0x18
		::System::Single TouchScreenAimAssistRatio; // 0x1C
	};
}
