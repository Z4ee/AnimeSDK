#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigCameraPosType_TypeDefinitionIndex = 39858;

	enum class ConfigCameraPosType : ::System::Int32
	{
		SpecialCamera = 2,
		LocalPos = 1,
		WorldPos = 0,
	};
}
