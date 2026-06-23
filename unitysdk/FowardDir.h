#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int FowardDir_TypeDefinitionIndex = 51814;

enum class FowardDir : ::System::Int32
{
	Foward = 1,
	None = 0,
	Left = 2,
	Right = 4,
	Back = 3,
};
