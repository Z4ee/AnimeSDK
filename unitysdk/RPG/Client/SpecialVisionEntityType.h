#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SpecialVisionEntityType_TypeDefinitionIndex = 65971;

	enum class SpecialVisionEntityType : ::System::Int32
	{
		RealWorld = 0,
		Dreamland = 1,
	};
}
