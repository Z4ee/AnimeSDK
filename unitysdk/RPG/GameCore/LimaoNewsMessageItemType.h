#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimaoNewsMessageItemType_TypeDefinitionIndex = 13222;

	enum class LimaoNewsMessageItemType : ::System::Int32
	{
		None = 0,
		Text = 1,
		Image = 2,
		Sticker = 3,
	};
}
