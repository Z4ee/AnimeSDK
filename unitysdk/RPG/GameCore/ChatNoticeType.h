#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChatNoticeType_TypeDefinitionIndex = 11855;

	enum class ChatNoticeType : ::System::Int32
	{
		None = 0,
		MatchThreeInvite = 1,
	};
}
