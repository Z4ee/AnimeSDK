#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int NoteInputResult_TypeDefinitionIndex = 57494;

	enum class NoteInputResult : ::System::Int32
	{
		None = 0,
		Miss = 1,
		Good = 2,
		Perfect = 3,
	};
}
