#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int RefGPUParticleSystem_EmitterShape_TypeDefinitionIndex = 41354;

enum class RefGPUParticleSystem_EmitterShape : ::System::Int32
{
	Point = 0,
	Edge = 1,
	Circle = 2,
	Box = 3,
	HemiSphere = 4,
	Sphere = 5,
	Cone = 6,
	Texture = 7,
	Mesh = 8,
	MeshFilter = 9,
	SkinnedMeshRenderer = 10,
};
