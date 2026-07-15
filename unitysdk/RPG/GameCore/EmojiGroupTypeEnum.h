#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EmojiGroupTypeEnum_TypeDefinitionIndex = 12724;

	enum class EmojiGroupTypeEnum : ::System::Int32
	{
		Unknown = 0,
		All = 1,
		ChatOnly = 2,
		MessageOnly = 3,
	};
}
