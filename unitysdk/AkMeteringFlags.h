#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkMeteringFlags_TypeDefinitionIndex = 41959;

enum class AkMeteringFlags : ::System::Int32
{
	AK_NoMetering = 0,
	AK_EnableBusMeter_Peak = 1,
	AK_EnableBusMeter_TruePeak = 2,
	AK_EnableBusMeter_RMS = 4,
	AK_EnableBusMeter_KPower = 16,
	AK_EnableBusMeter_3DMeter = 32,
};
