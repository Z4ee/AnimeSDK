#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int OffMeshLinkMoveMethod_TypeDefinitionIndex = 74491;

enum class OffMeshLinkMoveMethod : ::System::Int32
{
	Curve = 3,
	Teleport = 0,
	NormalSpeed = 1,
	Parabola = 2,
};
