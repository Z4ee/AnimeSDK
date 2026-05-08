#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ShowEntryType_TypeDefinitionIndex = 59860;

	enum class ShowEntryType : ::System::Int32
	{
		MovieKey = 2,
		MovieId = 5,
		AnimKey = 4,
		SecondaryMovie = 3,
		TextureKey = 1,
		AnimID = 0,
	};
}
