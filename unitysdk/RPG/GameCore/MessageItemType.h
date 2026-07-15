#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageItemType_TypeDefinitionIndex = 13869;

	enum class MessageItemType : ::System::Int32
	{
		None = 0,
		Text = 1,
		Image = 2,
		Sticker = 3,
		Raid = 4,
		Video = 5,
		Link = 6,
	};
}
