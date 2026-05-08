#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int CloudButtonRumbleType_TypeDefinitionIndex = 75105;

	enum class CloudButtonRumbleType : ::System::Int32
	{
		Strong = 2,
		Weak = 1,
		Disable = 0,
	};
}
