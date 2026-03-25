#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceFightStateType_TypeDefinitionIndex = 16854;

	enum class CakeRaceFightStateType : ::System::Int32
	{
		None = 0,
		FightEffectShow = 1,
		FightBegin = 2,
	};
}
