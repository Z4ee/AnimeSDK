#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PorterPuzzleMode_TypeDefinitionIndex = 73291;

	enum class PorterPuzzleMode : ::System::Int32
	{
		PerMatchMode = 0,
		GroupMatchMode = 1,
	};
}
