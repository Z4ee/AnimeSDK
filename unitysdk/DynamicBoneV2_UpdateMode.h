#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int DynamicBoneV2_UpdateMode_TypeDefinitionIndex = 35293;

enum class DynamicBoneV2_UpdateMode : ::System::Int32
{
	Normal = 0,
	AnimatePhysics = 1,
	UnscaledTime = 2,
	Default = 3,
};
