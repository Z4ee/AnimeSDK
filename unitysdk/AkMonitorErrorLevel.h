#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkMonitorErrorLevel_TypeDefinitionIndex = 43572;

enum class AkMonitorErrorLevel : ::System::Int32
{
	ErrorLevel_Message = 1,
	ErrorLevel_Error = 2,
	ErrorLevel_All = 3,
};
