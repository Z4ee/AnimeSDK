#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int MusicRhythmPropType_TypeDefinitionIndex = 72700;

	enum class MusicRhythmPropType : ::System::Int32
	{
		None = 0,
		Hanu = 1,
		SmallTarget = 2,
		MiddleTarget = 3,
		BigTarget = 4,
	};
}
