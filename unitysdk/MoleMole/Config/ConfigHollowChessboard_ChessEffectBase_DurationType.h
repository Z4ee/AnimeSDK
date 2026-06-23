#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_ChessEffectBase_DurationType_TypeDefinitionIndex = 64392;

	enum class ConfigHollowChessboard_ChessEffectBase_DurationType : ::System::Int32
	{
		UntilEffectFinish = 1,
		FixedRatio = 3,
		Immediately = 0,
		FixedDuration = 2,
	};
}
