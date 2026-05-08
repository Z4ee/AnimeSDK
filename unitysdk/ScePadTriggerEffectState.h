#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int ScePadTriggerEffectState_TypeDefinitionIndex = 65316;

enum class ScePadTriggerEffectState : ::System::Int32
{
	VibrationActive = 7,
	WeaponStandby = 3,
	FeedbackActive = 2,
	WeaponPulling = 4,
	VibrationStandby = 6,
	FeedbackStandby = 1,
	WeaponFiring = 5,
	Off = 0,
	Intercepted = -1,
};
