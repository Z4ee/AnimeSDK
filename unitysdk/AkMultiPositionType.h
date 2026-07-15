#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AkMultiPositionType_TypeDefinitionIndex = 41963;

enum class AkMultiPositionType : ::System::Int32
{
	MultiPositionType_SingleSource = 0,
	MultiPositionType_MultiSources = 1,
	MultiPositionType_MultiDirections = 2,
};
