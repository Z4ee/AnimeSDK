#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ShowEntryType_TypeDefinitionIndex = 74765;

	enum class ShowEntryType : ::System::Int32
	{
		MovieKey = 2,
		AnimKey = 4,
		SecondaryMovie = 3,
		TextureKey = 1,
		MovieId = 5,
		AnimID = 0,
	};
}
