#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphAimUnitType_TypeDefinitionIndex = 66303;

	enum class PhotoGraphAimUnitType : ::System::Int32
	{
		AimInfo = 0,
		AimPoint = 1,
		AimGiantTarget = 2,
	};
}
