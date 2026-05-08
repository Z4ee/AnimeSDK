#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Audio_PINVOKE_DeviceClass_TypeDefinitionIndex = 67775;

enum class Audio_PINVOKE_DeviceClass : ::System::Int32
{
	Keyboard = 3,
	GameControl = 4,
	Device = 1,
	Pointer = 2,
	All = 0,
};
