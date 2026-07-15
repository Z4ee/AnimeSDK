#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphUIMode_TypeDefinitionIndex = 58197;

	enum class PhotoGraphUIMode : ::System::Int32
	{
		None = 0,
		CommonShot = 1,
		CommonShotDecal = 2,
	};
}
