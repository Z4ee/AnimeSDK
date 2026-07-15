#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueHyperParamType_TypeDefinitionIndex = 14116;

	enum class RogueHyperParamType : ::System::Int32
	{
		None = 0,
		Number = 1,
		Buff = 100,
		Miracle = 101,
		Formula = 102,
		MagicUnit = 103,
		MagicScepter = 104,
		TitanBless = 105,
		Hex = 106,
		Keyword = 107,
		PersonaRoomCompositionType = 108,
		PersonaRoomAttribute = 109,
		PersonaStyle = 110,
		MagicArea = 200,
	};
}
