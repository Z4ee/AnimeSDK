#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGrenadierTargetType_TypeDefinitionIndex = 17851;

	enum class FiveDimGrenadierTargetType : ::System::Int32
	{
		Player = 0,
		CustomTarget = 1,
	};
}
