#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int FunctionMaskLevel_TypeDefinitionIndex = 64743;

enum class FunctionMaskLevel : ::System::Int32
{
	Lock = 1,
	Malfunction = 2,
	Invisible = 4,
	Disable = 3,
	None = 0,
};
