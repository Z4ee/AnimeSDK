#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int ScePadTriggerEffectState_TypeDefinitionIndex = 88830;

enum class ScePadTriggerEffectState : ::System::Int32
{
	FeedbackStandby = 1,
	FeedbackActive = 2,
	Intercepted = -1,
	WeaponPulling = 4,
	Off = 0,
	VibrationStandby = 6,
	WeaponStandby = 3,
	VibrationActive = 7,
	WeaponFiring = 5,
};
