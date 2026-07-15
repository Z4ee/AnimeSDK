#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassDirection_TypeDefinitionIndex = 74972;

	enum class WormCompassDirection : ::System::Int32
	{
		Empty = 0,
		Right_Counterclockwise = 1,
		Up = 2,
		Left_Clockwise = 3,
		Down = 4,
		Right_Counterclockwise_Platform = 5,
		Up_Platform = 6,
		Left_Clockwise_Platform = 7,
		Down_Platform = 8,
	};
}
