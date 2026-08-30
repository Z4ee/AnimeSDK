#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDefenceCharacterType_TypeDefinitionIndex = 17847;

	enum class RtDefenceCharacterType : ::System::Int32
	{
		Avatar = 0,
		Monster = 1,
		Base = 2,
	};
}
