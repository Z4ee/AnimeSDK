#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore::GameMode
{
	inline static constexpr unsigned int DiceCombatGameMode_TypeDefinitionIndex = 34993;

	enum class DiceCombatGameMode : ::System::Byte
	{
		OneVSOne = 0x0,
		TwoVsOne = 0x1,
	};
}
