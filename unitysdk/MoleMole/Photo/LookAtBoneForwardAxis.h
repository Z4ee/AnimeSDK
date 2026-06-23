#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int LookAtBoneForwardAxis_TypeDefinitionIndex = 42646;

	enum class LookAtBoneForwardAxis : ::System::Int32
	{
		Up = 2,
		Left = 4,
		Forward = 0,
		Backward = 1,
		Down = 3,
		Right = 5,
	};
}
