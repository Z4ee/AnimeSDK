#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectComponentFlags_TypeDefinitionIndex = 62142;

	enum class EViewObjectComponentFlags : ::System::Int32
	{
		Detaching = 32,
		CustomDestroy = 16,
		EnableUpdate = 2,
		Enabled = 4,
	};
}
