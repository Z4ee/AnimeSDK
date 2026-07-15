#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int LegacyGPUParticleSystem_EmitterShape_TypeDefinitionIndex = 41345;

enum class LegacyGPUParticleSystem_EmitterShape : ::System::Int32
{
	Edge = 0,
	Circle = 1,
	Box = 2,
	HemiSphere = 3,
	Sphere = 4,
	Cone = 5,
	Texture = 6,
	Mesh = 7,
	MeshFilter = 8,
	SkinMeshPCOnly = 9,
	BezierCurve = 10,
};
