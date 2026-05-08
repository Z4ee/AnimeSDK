#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int LookAtBoneForwardAxis_TypeDefinitionIndex = 63189;

	enum class LookAtBoneForwardAxis : ::System::Int32
	{
		Down = 3,
		Left = 4,
		Up = 2,
		Forward = 0,
		Right = 5,
		Backward = 1,
	};
}
