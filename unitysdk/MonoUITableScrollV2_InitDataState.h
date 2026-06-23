#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoUITableScrollV2_InitDataState_TypeDefinitionIndex = 69977;

enum class MonoUITableScrollV2_InitDataState : ::System::Int32
{
	NotInit = 0,
	Inited = 2,
	WaitForRefreshGameObject = 1,
};
