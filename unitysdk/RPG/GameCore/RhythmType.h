#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RhythmType_TypeDefinitionIndex = 12338;

	enum class RhythmType : ::System::Int32
	{
		TYPE_TENSE = 0,
		TYPE_EASY = 1,
	};
}
