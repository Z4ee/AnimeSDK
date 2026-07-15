#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int NoteType_TypeDefinitionIndex = 16273;

	enum class NoteType : ::System::Int32
	{
		Hint = 0,
		Input = 1,
	};
}
