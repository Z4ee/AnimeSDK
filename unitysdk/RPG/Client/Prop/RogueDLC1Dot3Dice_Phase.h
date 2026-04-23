#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RogueDLC1Dot3Dice_Phase_TypeDefinitionIndex = 72448;

	enum class RogueDLC1Dot3Dice_Phase : ::System::Int32
	{
		None = 0,
		Rotate = 1,
		End = 2,
	};
}
