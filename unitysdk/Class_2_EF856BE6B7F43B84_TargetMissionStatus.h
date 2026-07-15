#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_2_EF856BE6B7F43B84_TargetMissionStatus_TypeDefinitionIndex = 50256;

enum class Class_2_EF856BE6B7F43B84_TargetMissionStatus : ::System::Int32
{
	UnfinishedOrDisabled = 0,
	FinishedInCurrentVersion = 1,
	FinishedInOtherVersion = 2,
	InvalidStatus = 3,
};
