#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AudioTriggerMode_TypeDefinitionIndex = 38379;

enum class AudioTriggerMode : ::System::Int32
{
	Once = 0,
	Retrigger = 1,
	Continuous = 2,
};
