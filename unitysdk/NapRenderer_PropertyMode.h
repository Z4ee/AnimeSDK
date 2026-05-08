#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NapRenderer_PropertyMode_TypeDefinitionIndex = 29591;

enum class NapRenderer_PropertyMode : ::System::Int32
{
	Material = 0,
	PerMaterialMpb = 1,
	PerRendererMpb = 2,
};
