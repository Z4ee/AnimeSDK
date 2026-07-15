#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MsaaQuality_TypeDefinitionIndex = 35996;

	enum class MsaaQuality : ::System::Int32
	{
		Disabled = 1,
		_2x = 2,
		_4x = 4,
		_8x = 8,
	};
}
