#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageHarmonyDemodulator.h"

inline static constexpr unsigned int StageHarmonyBaseDemodulator_1_TypeDefinitionIndex = 45732;

template <typename TDataType>
class StageHarmonyBaseDemodulator_1 : public ::StageHarmonyDemodulator
{
public:
	TDataType DebugOuputValue; // 0x0
};
