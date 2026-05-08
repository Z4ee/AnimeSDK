#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_InitDataState_TypeDefinitionIndex = 54046;

enum class MonoUITableScrollV2_InitDataState : ::System::Int32
{
	WaitForRefreshGameObject = 1,
	NotInit = 0,
	Inited = 2,
};
