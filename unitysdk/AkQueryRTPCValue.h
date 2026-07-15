#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkQueryRTPCValue_TypeDefinitionIndex = 41977;

enum class AkQueryRTPCValue : ::System::Int32
{
	RTPCValue_Default = 0,
	RTPCValue_Global = 1,
	RTPCValue_GameObject = 2,
	RTPCValue_PlayingID = 3,
	RTPCValue_Unavailable = 4,
};
