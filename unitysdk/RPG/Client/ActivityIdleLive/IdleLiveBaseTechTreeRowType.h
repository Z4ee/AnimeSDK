#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveBaseTechTreeRowType_TypeDefinitionIndex = 75102;

	enum class IdleLiveBaseTechTreeRowType : ::System::Int32
	{
		None = 0,
		SingleBig = 1,
		SingleSmall = 2,
		SmallToOne = 3,
		SmallToThree = 4,
		BigToOne = 5,
		BigToThree = 6,
		ThreeToOne = 7,
	};
}
