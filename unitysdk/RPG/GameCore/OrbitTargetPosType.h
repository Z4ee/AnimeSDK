#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int OrbitTargetPosType_TypeDefinitionIndex = 23312;

	enum class OrbitTargetPosType : ::System::Int32
	{
		BaseOnForward = 0,
		BaseOnModelRotation = 1,
		CurrentCruiseCenter = 2,
		BackTransfer = 3,
		OriginalStay = 4,
	};
}
