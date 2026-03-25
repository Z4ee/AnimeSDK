#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BookletMessage_TypeDefinitionIndex = 59320;

	enum class BookletMessage : ::System::Int32
	{
		RefreshAll = 0,
		RefreshSkipState = 1,
		RefreshPlayingState = 2,
		FlipBegun = 3,
		FlipEnded = 4,
		SectionStartBegun = 5,
		SectionFinishBegun = 6,
	};
}
