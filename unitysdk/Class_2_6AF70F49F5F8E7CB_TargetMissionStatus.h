#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_2_6AF70F49F5F8E7CB_TargetMissionStatus_TypeDefinitionIndex = 49241;

enum class Class_2_6AF70F49F5F8E7CB_TargetMissionStatus : ::System::Int32
{
	UnfinishedOrDisabled = 0,
	FinishedInCurrentVersion = 1,
	FinishedInOtherVersion = 2,
	InvalidStatus = 3,
};
