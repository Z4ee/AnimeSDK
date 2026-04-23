#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassItemType_TypeDefinitionIndex = 72426;

	enum class WormCompassItemType : ::System::Int32
	{
		Empty = 0,
		StartPoint = 1,
		EndPoint = 2,
		Direction = 3,
	};
}
