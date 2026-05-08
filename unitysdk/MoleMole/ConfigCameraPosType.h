#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigCameraPosType_TypeDefinitionIndex = 67758;

	enum class ConfigCameraPosType : ::System::Int32
	{
		LocalPos = 1,
		SpecialCamera = 2,
		WorldPos = 0,
	};
}
