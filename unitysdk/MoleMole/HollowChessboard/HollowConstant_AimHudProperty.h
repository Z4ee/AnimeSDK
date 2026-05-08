#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowConstant_AimHudProperty_TypeDefinitionIndex = 81942;

	enum class HollowConstant_AimHudProperty : ::System::Int32
	{
		Default = 0,
		Player = 1,
		OverridePlayer = 2,
	};
}
