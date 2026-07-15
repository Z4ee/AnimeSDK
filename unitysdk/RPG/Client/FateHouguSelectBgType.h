#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FateHouguSelectBgType_TypeDefinitionIndex = 61163;

	enum class FateHouguSelectBgType : ::System::Int32
	{
		ProjectionInitial = 0,
		ProjectionUltimate = 1,
		InGame = 2,
	};
}
