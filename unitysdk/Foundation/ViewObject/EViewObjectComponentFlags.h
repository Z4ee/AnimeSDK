#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EViewObjectComponentFlags_TypeDefinitionIndex = 62059;

	enum class EViewObjectComponentFlags : ::System::Int32
	{
		Detaching = 32,
		CustomDestroy = 16,
		Enabled = 4,
	};
}
