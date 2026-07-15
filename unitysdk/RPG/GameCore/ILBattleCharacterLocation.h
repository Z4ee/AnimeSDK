#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleCharacterLocation_TypeDefinitionIndex = 10211;

	enum class ILBattleCharacterLocation : ::System::Int32
	{
		Front = 0,
		Background = 1,
		Support = 2,
		Captain = 3,
	};
}
