#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int EngineChecker_CheckLevel_TypeDefinitionIndex = 81998;

enum class EngineChecker_CheckLevel : ::System::Int32
{
	kCrash = 2,
	kNoCheck = 0,
	kLog = 1,
};
