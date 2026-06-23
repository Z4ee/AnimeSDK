#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ShowEntryType_TypeDefinitionIndex = 76385;

	enum class ShowEntryType : ::System::Int32
	{
		AnimID = 0,
		TextureKey = 1,
		AnimKey = 4,
		MovieId = 5,
		SecondaryMovie = 3,
		MovieKey = 2,
	};
}
