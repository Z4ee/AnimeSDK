#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AvatarSteerType_TypeDefinitionIndex = 75545;

	enum class AvatarSteerType : ::System::Byte
	{
		Clamp = 0x1,
		Instant = 0x0,
		Fixed = 0x2,
	};
}
