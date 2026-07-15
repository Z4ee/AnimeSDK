#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleItemFeature_TypeDefinitionIndex = 16160;

	enum class MarbleItemFeature : ::System::Int32
	{
		None = 0,
		Spine = 1,
		Bounce = 2,
		ActionAgain = 3,
	};
}
