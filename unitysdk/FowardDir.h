#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int FowardDir_TypeDefinitionIndex = 90716;

enum class FowardDir : ::System::Int32
{
	Foward = 1,
	Back = 3,
	Right = 4,
	Left = 2,
	None = 0,
};
