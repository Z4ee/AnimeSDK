#pragma once
#include "unitysdk/unitysdk.h"

namespace JetBrains::Annotations
{
	inline static constexpr unsigned int ImplicitUseKindFlags_TypeDefinitionIndex = 4002;

	enum class ImplicitUseKindFlags : ::System::Int32
	{
		Default = 7,
		Access = 1,
		Assign = 2,
		InstantiatedWithFixedConstructorSignature = 4,
		InstantiatedNoFixedConstructorSignature = 8,
	};
}
