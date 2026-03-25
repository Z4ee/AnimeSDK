#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackNpcState_TypeDefinitionIndex = 42397;

	enum class TrackNpcState : ::System::Int32
	{
		Ready = 0,
		Tracking = 1,
		End = 2,
	};
}
