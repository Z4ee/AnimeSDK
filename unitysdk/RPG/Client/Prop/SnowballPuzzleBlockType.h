#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int SnowballPuzzleBlockType_TypeDefinitionIndex = 72361;

	enum class SnowballPuzzleBlockType : ::System::Int32
	{
		Empty = 0,
		Block = 1,
		Snow = 2,
		Destination = 3,
		Snowball = 4,
		Fire = 5,
		Invalid = 6,
	};
}
