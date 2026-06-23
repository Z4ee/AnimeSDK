#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int EngineChecker_CheckLevel_TypeDefinitionIndex = 50062;

enum class EngineChecker_CheckLevel : ::System::Int32
{
	kLog = 1,
	kNoCheck = 0,
	kCrash = 2,
};
