#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType_TypeDefinitionIndex = 42032;

enum class AkCommonOutputSettings_ChannelConfiguration_ChannelConfigType : ::System::Int32
{
	Anonymous = 0,
	Standard = 1,
	Ambisonic = 2,
};
