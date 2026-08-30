#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_2_B105BEE67D1C2502_PoseEntitiesLoadingState_TypeDefinitionIndex = 60705;

enum class Class_2_B105BEE67D1C2502_PoseEntitiesLoadingState : ::System::Int32
{
	NotLoading = 0,
	Pending = 1,
	WaitingNavmesh = 2,
	LoadingEntities = 3,
	RefineLoadedEntities = 4,
	WaitingMapRotateDamping = 5,
	Finish = 6,
};
