#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OpticalIllusionPlane_TypeDefinitionIndex = 72195;

	enum class OpticalIllusionPlane : ::System::Int32
	{
		XOY = 0,
		YOZ = 1,
	};
}
