#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_99663460B1F191F7_VCameraDialogChangeState_TypeDefinitionIndex = 66412;

enum class Class_1_99663460B1F191F7_VCameraDialogChangeState : ::System::Int32
{
	WaitingStart = 0,
	ChangeToTarget = 1,
	ChangeToTargetFinish = 2,
	RecoveryToStart = 3,
	RecoveryToStartFinish = 4,
};
