#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMedalGuide_TypeDefinitionIndex = 70121;

	struct alignas(4) ConfigMedalGuide
	{
		::System::Single ShowGuideDuration; // 0x10
	};
}
