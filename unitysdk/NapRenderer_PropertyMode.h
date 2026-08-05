#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NapRenderer_PropertyMode_TypeDefinitionIndex = 27387;

enum class NapRenderer_PropertyMode : ::System::Int32
{
	PerMaterialMpb = 1,
	PerRendererMpb = 2,
	Material = 0,
};
