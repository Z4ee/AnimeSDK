#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkActionOnEventType_TypeDefinitionIndex = 41910;

enum class AkActionOnEventType : ::System::Int32
{
	AkActionOnEventType_Stop = 0,
	AkActionOnEventType_Pause = 1,
	AkActionOnEventType_Resume = 2,
	AkActionOnEventType_Break = 3,
	AkActionOnEventType_ReleaseEnvelope = 4,
};
