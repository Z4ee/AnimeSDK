#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int LegType_TypeDefinitionIndex = 40687;

enum class LegType : ::System::Int32
{
	Humanoid = 0,
	BipedAntiJoint = 1,
	Quadruped = 2,
};
