#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkAudioDeviceState_TypeDefinitionIndex = 41911;

enum class AkAudioDeviceState : ::System::Int32
{
	AkDeviceState_Unknown = 0,
	AkDeviceState_Active = 1,
	AkDeviceState_Disabled = 2,
	AkDeviceState_NotPresent = 4,
	AkDeviceState_Unplugged = 8,
	AkDeviceState_All = 15,
};
