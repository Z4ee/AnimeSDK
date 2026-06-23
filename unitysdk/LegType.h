#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int LegType_TypeDefinitionIndex = 51081;

enum class LegType : ::System::Int32
{
	BipedAntiJoint = 1,
	Quadruped = 2,
	Humanoid = 0,
};
