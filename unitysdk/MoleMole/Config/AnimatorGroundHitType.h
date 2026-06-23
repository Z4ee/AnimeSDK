#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorGroundHitType_TypeDefinitionIndex = 72134;

	enum class AnimatorGroundHitType : ::System::Int32
	{
		Light = 1,
		Heavy = 2,
		Knock = 3,
		Stay = 0,
	};
}
