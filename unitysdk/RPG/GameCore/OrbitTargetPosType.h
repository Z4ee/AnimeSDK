#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int OrbitTargetPosType_TypeDefinitionIndex = 23798;

	enum class OrbitTargetPosType : ::System::Int32
	{
		BaseOnForward = 0,
		BaseOnModelRotation = 1,
		BaseOnModelRotationReverse = 2,
		CurrentCruiseCenter = 3,
		BackTransfer = 4,
		OriginalStay = 5,
	};
}
