#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Audio_PINVOKE_DeviceClass_TypeDefinitionIndex = 80170;

enum class Audio_PINVOKE_DeviceClass : ::System::Int32
{
	Device = 1,
	Keyboard = 3,
	GameControl = 4,
	All = 0,
	Pointer = 2,
};
