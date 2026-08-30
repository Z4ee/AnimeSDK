#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_2_B105BEE67D1C2502_PoseEntitiesShowingState_TypeDefinitionIndex = 60706;

enum class Class_2_B105BEE67D1C2502_PoseEntitiesShowingState : ::System::Int32
{
	NotShowing = 0,
	Pending = 1,
	WaitingNavmesh = 2,
	ShowingEntities = 3,
	WaitingMapRotateDamping = 4,
	Finish = 5,
};
