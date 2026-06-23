#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Audio_PINVOKE_DeviceEnumerationFlags_TypeDefinitionIndex = 86140;

enum class Audio_PINVOKE_DeviceEnumerationFlags : ::System::Int32
{
	IncludeHidden = 262144,
	IncludeAliases = 65536,
	AttachedOnly = 1,
	ForceFeedback = 256,
	IncludePhantoms = 131072,
	None = 0,
	AllDevices = 0,
};
