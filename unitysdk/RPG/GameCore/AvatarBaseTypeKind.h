#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarBaseTypeKind_TypeDefinitionIndex = 10047;

	enum class AvatarBaseTypeKind : ::System::UInt32
	{
		None = 0x0,
		Main = 0x1,
		Extra = 0x2,
		Latest = 0x4,
		All = 0x3,
	};
}
