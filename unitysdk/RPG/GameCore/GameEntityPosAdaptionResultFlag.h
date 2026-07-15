#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntityPosAdaptionResultFlag_TypeDefinitionIndex = 55232;

	enum class GameEntityPosAdaptionResultFlag : ::System::Int32
	{
		Invalid = 1,
		PosChanged = 2,
		Blocked = 4,
	};
}
