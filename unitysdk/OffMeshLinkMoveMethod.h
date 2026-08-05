#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int OffMeshLinkMoveMethod_TypeDefinitionIndex = 53429;

enum class OffMeshLinkMoveMethod : ::System::Int32
{
	Teleport = 0,
	NormalSpeed = 1,
	Curve = 3,
	Parabola = 2,
};
