#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int LegacyGPUParticleSystem_ParticleType_TypeDefinitionIndex = 41346;

enum class LegacyGPUParticleSystem_ParticleType : ::System::Int32
{
	Point = 0,
	Triangle = 1,
	Billboard = 2,
	HorizontalBillboard = 3,
	VerticalBillboard = 4,
	StretchedBillboard = 5,
	Mesh = 6,
};
