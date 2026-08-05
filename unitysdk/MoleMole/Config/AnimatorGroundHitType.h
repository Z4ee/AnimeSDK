#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorGroundHitType_TypeDefinitionIndex = 81952;

	enum class AnimatorGroundHitType : ::System::Int32
	{
		Knock = 3,
		Heavy = 2,
		Light = 1,
		Stay = 0,
	};
}
