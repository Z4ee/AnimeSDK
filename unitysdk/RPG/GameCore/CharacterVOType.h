#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterVOType_TypeDefinitionIndex = 15726;

	enum class CharacterVOType : ::System::Int32
	{
		Unknow = 0,
		ActionBegin = 1,
		ActionBeginAdvantage = 2,
		ActionBeginHighThreat = 3,
		ReceiveHealing = 4,
		ReceiveBuff = 5,
		Revived = 6,
		UltraReady = 7,
		LightHit = 8,
		StandBy = 9,
	};
}
