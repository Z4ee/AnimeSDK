#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterHUDType_TypeDefinitionIndex = 16375;

	enum class CharacterHUDType : ::System::Int32
	{
		Unknown = 0,
		Default = 1,
		GodPhainon = 2,
		SilverWolf999 = 3,
	};
}
