#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AvatarSteerType_TypeDefinitionIndex = 72922;

	enum class AvatarSteerType : ::System::Byte
	{
		Instant = 0x0,
		Clamp = 0x1,
		Fixed = 0x2,
	};
}
