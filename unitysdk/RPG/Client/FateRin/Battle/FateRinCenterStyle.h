#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinCenterStyle_TypeDefinitionIndex = 79533;

	enum class FateRinCenterStyle : ::System::Int32
	{
		Number = 1,
		Icon = 2,
		PercentNumber = 4,
		FractionNumber = 8,
		BattleNumber = 16,
		AnyNumber = 29,
	};
}
