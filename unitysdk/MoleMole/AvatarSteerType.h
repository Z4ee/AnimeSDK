#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AvatarSteerType_TypeDefinitionIndex = 62861;

	enum class AvatarSteerType : ::System::Byte
	{
		Fixed = 0x2,
		Instant = 0x0,
		Clamp = 0x1,
	};
}
