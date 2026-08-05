#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectComponentFlags_TypeDefinitionIndex = 72279;

	enum class EViewObjectComponentFlags : ::System::Int32
	{
		CustomDestroy = 16,
		Detaching = 32,
		Enabled = 4,
	};
}
