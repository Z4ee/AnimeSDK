#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimVCameraBlendHint_TypeDefinitionIndex = 17885;

	enum class FiveDimVCameraBlendHint : ::System::Int32
	{
		LinearPosition = 0,
		CylindricalPosition = 2,
	};
}
