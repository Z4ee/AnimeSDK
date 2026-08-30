#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CasterType_TypeDefinitionIndex = 36963;

	enum class CasterType : ::System::Int32
	{
		Normal = 0,
		Stable = 1,
		FrequencyMove = 2,
	};
}
