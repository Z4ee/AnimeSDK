#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NapLodController_LoadingState_TypeDefinitionIndex = 82240;

enum class NapLodController_LoadingState : ::System::Int32
{
	Unload = 0,
	Loading = 1,
	Ready = 2,
};
