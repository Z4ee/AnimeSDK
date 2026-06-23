#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Audio_PINVOKE_DeviceClass_TypeDefinitionIndex = 86133;

enum class Audio_PINVOKE_DeviceClass : ::System::Int32
{
	Keyboard = 3,
	All = 0,
	Device = 1,
	Pointer = 2,
	GameControl = 4,
};
