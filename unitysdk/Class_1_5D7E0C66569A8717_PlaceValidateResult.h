#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_5D7E0C66569A8717_PlaceValidateResult_TypeDefinitionIndex = 73802;

enum class Class_1_5D7E0C66569A8717_PlaceValidateResult : ::System::Int32
{
	Success = 0,
	InvalidCell = 1,
	OccupyConflict = 2,
	NoCurrentItem = 3,
	LockedState = 4,
	TutorialBlock = 5,
};
