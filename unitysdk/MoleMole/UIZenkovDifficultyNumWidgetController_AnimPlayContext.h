#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDifficultyNumWidgetController_AnimPlayContext_TypeDefinitionIndex = 82723;

	struct alignas(4) UIZenkovDifficultyNumWidgetController_AnimPlayContext
	{
		::System::Int32 TargetDigit; // 0x10
		::System::Boolean HasValue; // 0x14
		::System::Int32 index; // 0x18
	};
}
