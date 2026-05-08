#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int EngineChecker_CheckLevel_TypeDefinitionIndex = 75423;

enum class EngineChecker_CheckLevel : ::System::Int32
{
	kNoCheck = 0,
	kLog = 1,
	kCrash = 2,
};
