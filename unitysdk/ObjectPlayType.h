#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int ObjectPlayType_TypeDefinitionIndex = 90272;

enum class ObjectPlayType : ::System::Int32
{
	Light = 4,
	Video = 2,
	FrameTexture = 1,
	Effect = 3,
	None = 0,
};
