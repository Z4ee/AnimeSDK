#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int RefGPUParticleSystem_ParticleType_TypeDefinitionIndex = 41355;

enum class RefGPUParticleSystem_ParticleType : ::System::Int32
{
	Point = 0,
	Triangle = 1,
	Billboard = 2,
	HorizontalBillboard = 3,
	VerticalBillboard = 4,
	StretchedTail = 5,
	StretchedBillboard = 6,
	Mesh = 7,
	Trails = 8,
};
