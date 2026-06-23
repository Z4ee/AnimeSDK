#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int ScePadTriggerEffectState_TypeDefinitionIndex = 80091;

enum class ScePadTriggerEffectState : ::System::Int32
{
	FeedbackActive = 2,
	WeaponPulling = 4,
	WeaponFiring = 5,
	FeedbackStandby = 1,
	VibrationStandby = 6,
	Intercepted = -1,
	Off = 0,
	VibrationActive = 7,
	WeaponStandby = 3,
};
