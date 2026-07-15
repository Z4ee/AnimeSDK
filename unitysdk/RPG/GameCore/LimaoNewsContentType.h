#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimaoNewsContentType_TypeDefinitionIndex = 13434;

	enum class LimaoNewsContentType : ::System::Int32
	{
		None = 0,
		Text = 1,
		Post = 2,
		Image = 3,
		ChapterTitle = 4,
	};
}
