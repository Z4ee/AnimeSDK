#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarChangeOption_TypeDefinitionIndex = 16450;

	enum class AvatarChangeOption : ::System::UInt32
	{
		None = 0x0,
		InheritProperty = 0x1,
		InheritAvatarBaseType = 0x2,
		InheritDamageType = 0x4,
		Option_Default = 0x3,
	};
}
