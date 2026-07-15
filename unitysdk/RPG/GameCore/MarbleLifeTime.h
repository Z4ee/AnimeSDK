#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleLifeTime_TypeDefinitionIndex = 16224;

	enum class MarbleLifeTime : ::System::Int32
	{
		Default = 0,
		ToActionEnd = 1,
		ToRoundEnd = 2,
		SeveralRound = 3,
		OneDeal = 4,
	};
}
