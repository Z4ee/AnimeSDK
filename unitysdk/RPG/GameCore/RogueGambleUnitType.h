#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueGambleUnitType_TypeDefinitionIndex = 10250;

	enum class RogueGambleUnitType : ::System::Int32
	{
		BuffCommon = 101,
		BuffRare = 102,
		BuffLegendary = 103,
		MiracleCommon = 201,
		MiracleRare = 202,
		MiracleLegendary = 203,
		MiracleNegative = 204,
		Coin = 301,
		MagicUnitCommon = 401,
		MagicUnitRare = 402,
		MagicUnitLegendary = 403,
	};
}
