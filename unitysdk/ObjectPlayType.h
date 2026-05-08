#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int ObjectPlayType_TypeDefinitionIndex = 80030;

enum class ObjectPlayType : ::System::Int32
{
	None = 0,
	Effect = 3,
	Light = 4,
	FrameTexture = 1,
	Video = 2,
};
