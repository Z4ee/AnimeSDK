#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarBaseTypeKind_TypeDefinitionIndex = 10084;

	enum class AvatarBaseTypeKind : ::System::UInt32
	{
		Main = 0x1,
		Sub = 0x2,
		Dynamic = 0x4,
		Latest = 0x8,
		MainAndSub = 0x3,
		All = 0x7,
	};
}
