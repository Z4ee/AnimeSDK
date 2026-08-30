#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkPreparationType_TypeDefinitionIndex = 43587;

enum class AkPreparationType : ::System::Int32
{
	Preparation_Load = 0,
	Preparation_Unload = 1,
	Preparation_LoadAndDecode = 2,
};
