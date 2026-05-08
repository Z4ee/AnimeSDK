#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int DynamicBone_UpdateMode_TypeDefinitionIndex = 33062;

enum class DynamicBone_UpdateMode : ::System::Int32
{
	Normal = 0,
	AnimatePhysics = 1,
	UnscaledTime = 2,
	Default = 3,
};
