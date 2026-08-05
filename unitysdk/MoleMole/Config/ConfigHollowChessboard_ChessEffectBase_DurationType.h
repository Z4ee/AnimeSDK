#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_ChessEffectBase_DurationType_TypeDefinitionIndex = 59281;

	enum class ConfigHollowChessboard_ChessEffectBase_DurationType : ::System::Int32
	{
		FixedRatio = 3,
		Immediately = 0,
		UntilEffectFinish = 1,
		FixedDuration = 2,
	};
}
