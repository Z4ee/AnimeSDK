#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityDynamicFloatInjection_TypeDefinitionIndex = 51928;

	struct alignas(8) AbilityDynamicFloatInjection
	{
		::System::Int32 Hash; // 0x10
		::RPG::GameCore::FixPoint Value; // 0x18
	};
}
