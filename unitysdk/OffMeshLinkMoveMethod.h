#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int OffMeshLinkMoveMethod_TypeDefinitionIndex = 46238;

enum class OffMeshLinkMoveMethod : ::System::Int32
{
	NormalSpeed = 1,
	Parabola = 2,
	Curve = 3,
	Teleport = 0,
};
