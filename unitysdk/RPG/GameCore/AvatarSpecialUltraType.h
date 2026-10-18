#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSpecialUltraType_TypeDefinitionIndex = 12742;

	enum class AvatarSpecialUltraType : ::System::Int32
	{
		Normal = 0,
		DoubleSP = 1,
		SpecialSP = 2,
		MixSP = 3,
		_Count = 4,
	};
}
