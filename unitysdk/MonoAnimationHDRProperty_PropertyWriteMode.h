#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MonoAnimationHDRProperty_PropertyWriteMode_TypeDefinitionIndex = 64706;

enum class MonoAnimationHDRProperty_PropertyWriteMode : ::System::Int32
{
	GlobalShaderProperty = 2,
	Material = 1,
	MaterialPropertyBlock = 0,
};
