#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigCameraPosType_TypeDefinitionIndex = 79042;

	enum class ConfigCameraPosType : ::System::Int32
	{
		WorldPos = 0,
		SpecialCamera = 2,
		LocalPos = 1,
	};
}
