#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicMarkType_TypeDefinitionIndex = 10257;

	enum class RogueMagicMarkType : ::System::Int32
	{
		None = 0,
		Double = 1,
		Choice = 2,
		ScepterUnitPuman = 3,
		MiraclePuman = 4,
		Extra = 5,
	};
}
