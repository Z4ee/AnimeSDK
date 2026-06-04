#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubmissionOptionalTrackMode_TypeDefinitionIndex = 18064;

	enum class SubmissionOptionalTrackMode : ::System::Int32
	{
		Queue = 0,
		Always = 1,
	};
}
