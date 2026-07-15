#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int InputNoteType_TypeDefinitionIndex = 16274;

	enum class InputNoteType : ::System::Int32
	{
		ShortPress = 0,
		LongPress = 1,
		Release = 2,
	};
}
