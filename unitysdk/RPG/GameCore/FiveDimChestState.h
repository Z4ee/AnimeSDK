#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimChestState_TypeDefinitionIndex = 17821;

	enum class FiveDimChestState : ::System::Int32
	{
		Lock = 0,
		Close = 1,
		Open = 2,
	};
}
