#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreAvatarType_TypeDefinitionIndex = 13976;

	enum class PreAvatarType : ::System::Int32
	{
		INVALID = 0,
		PRERELEASE = 1,
		REMASTER = 2,
	};
}
