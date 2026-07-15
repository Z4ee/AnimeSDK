#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int LightPerformanceTestUnit_MainLightState_TypeDefinitionIndex = 45529;

enum class LightPerformanceTestUnit_MainLightState : ::System::Int32
{
	MainLight_Off = 0,
	MainLight_Indoor = 1,
	MainLight_Indoor_ReflectionProbe = 2,
	MainLight_Outdoor = 3,
	MainLight_Outdoor_ReflectionProbe = 4,
	MainLight_Outdoor_GGXSpecular = 5,
	MainLight_Indoor_SSGI = 6,
};
