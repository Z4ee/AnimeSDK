#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_2_2F6354F2F5DDBF64_PoseEntitiesLoadingState_TypeDefinitionIndex = 57884;

enum class Class_2_2F6354F2F5DDBF64_PoseEntitiesLoadingState : ::System::Int32
{
	NotLoading = 0,
	Pending = 1,
	WaitingNavmesh = 2,
	LoadingEntities = 3,
	RefineLoadedEntities = 4,
	WaitingMapRotateDamping = 5,
	Finish = 6,
};
