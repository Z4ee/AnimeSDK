#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Audio_PINVOKE_DeviceEnumerationFlags_TypeDefinitionIndex = 67771;

enum class Audio_PINVOKE_DeviceEnumerationFlags : ::System::Int32
{
	None = 0,
	AttachedOnly = 1,
	ForceFeedback = 256,
	AllDevices = 0,
	IncludePhantoms = 131072,
	IncludeAliases = 65536,
	IncludeHidden = 262144,
};
