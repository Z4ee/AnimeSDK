#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TalkDebateBtn_TypeDefinitionIndex = 57966;

	enum class TalkDebateBtn : ::System::Int32
	{
		PrevBtn = 0,
		NextBtn = 1,
		AskBtn = 2,
		ShowBtn = 3,
		ToFirstBtn = 4,
	};
}
