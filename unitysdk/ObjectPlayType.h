#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int ObjectPlayType_TypeDefinitionIndex = 86116;

enum class ObjectPlayType : ::System::Int32
{
	Effect = 3,
	FrameTexture = 1,
	None = 0,
	Video = 2,
	Light = 4,
};
