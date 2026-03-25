#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PinballPuzzleItemType_TypeDefinitionIndex = 64218;

	enum class PinballPuzzleItemType : ::System::Int32
	{
		Station = 0,
		Plate = 1,
		Block = 2,
	};
}
