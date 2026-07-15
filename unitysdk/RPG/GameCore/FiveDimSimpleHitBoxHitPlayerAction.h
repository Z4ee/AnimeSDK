#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSimpleHitBoxHitPlayerAction_TypeDefinitionIndex = 17869;

	enum class FiveDimSimpleHitBoxHitPlayerAction : ::System::Int32
	{
		None = 0,
		BeatBack = 1,
		Reset = 2,
	};
}
