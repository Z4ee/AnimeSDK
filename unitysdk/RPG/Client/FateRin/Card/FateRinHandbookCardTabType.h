#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin::Card
{
	inline static constexpr unsigned int FateRinHandbookCardTabType_TypeDefinitionIndex = 79857;

	enum class FateRinHandbookCardTabType : ::System::Int32
	{
		None = 0,
		All = 1,
		Avatar = 2,
		Neutral = 3,
	};
}
