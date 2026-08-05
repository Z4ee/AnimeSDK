#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int LookAtBoneForwardAxis_TypeDefinitionIndex = 55587;

	enum class LookAtBoneForwardAxis : ::System::Int32
	{
		Down = 3,
		Backward = 1,
		Up = 2,
		Right = 5,
		Left = 4,
		Forward = 0,
	};
}
