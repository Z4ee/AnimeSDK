#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorGroundHitType_TypeDefinitionIndex = 53808;

	enum class AnimatorGroundHitType : ::System::Int32
	{
		Light = 1,
		Knock = 3,
		Heavy = 2,
		Stay = 0,
	};
}
