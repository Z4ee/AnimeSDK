#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_2_2F6354F2F5DDBF64_PoseEntitiesShowingState_TypeDefinitionIndex = 57885;

enum class Class_2_2F6354F2F5DDBF64_PoseEntitiesShowingState : ::System::Int32
{
	NotShowing = 0,
	Pending = 1,
	WaitingNavmesh = 2,
	ShowingEntities = 3,
	WaitingMapRotateDamping = 4,
	Finish = 5,
};
