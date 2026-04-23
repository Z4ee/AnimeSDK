#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_2_F58542D142C9905E_TargetMissionStatus_TypeDefinitionIndex = 48614;

enum class Class_2_F58542D142C9905E_TargetMissionStatus : ::System::Int32
{
	UnfinishedOrDisabled = 0,
	FinishedInCurrentVersion = 1,
	FinishedInOtherVersion = 2,
	InvalidStatus = 3,
};
