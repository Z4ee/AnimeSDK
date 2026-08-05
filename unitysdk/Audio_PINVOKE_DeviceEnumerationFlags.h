#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Audio_PINVOKE_DeviceEnumerationFlags_TypeDefinitionIndex = 80182;

enum class Audio_PINVOKE_DeviceEnumerationFlags : ::System::Int32
{
	IncludePhantoms = 131072,
	ForceFeedback = 256,
	IncludeAliases = 65536,
	None = 0,
	AttachedOnly = 1,
	IncludeHidden = 262144,
	AllDevices = 0,
};
