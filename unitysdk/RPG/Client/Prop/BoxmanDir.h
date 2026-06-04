#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BoxmanDir_TypeDefinitionIndex = 73361;

	enum class BoxmanDir : ::System::Int32
	{
		Up = 0,
		Right = 1,
		Bottom = 2,
		Left = 3,
		Size = 4,
	};
}
