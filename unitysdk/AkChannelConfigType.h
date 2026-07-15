#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkChannelConfigType_TypeDefinitionIndex = 41924;

enum class AkChannelConfigType : ::System::Int32
{
	AK_ChannelConfigType_Anonymous = 0,
	AK_ChannelConfigType_Standard = 1,
	AK_ChannelConfigType_Ambisonic = 2,
};
