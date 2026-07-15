#pragma once
#include "unitysdk/unitysdk.h"

namespace JetBrains::Annotations
{
	inline static constexpr unsigned int ImplicitUseTargetFlags_TypeDefinitionIndex = 4003;

	enum class ImplicitUseTargetFlags : ::System::Int32
	{
		Default = 1,
		Itself = 1,
		Members = 2,
		WithMembers = 3,
	};
}
