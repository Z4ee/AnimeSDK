#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatAvatarInfoType_TypeDefinitionIndex = 75615;

	enum class DiceCombatAvatarInfoType : ::System::Int32
	{
		StaticConfig = 0,
		OutOfBattle = 1,
		InBattle = 2,
	};
}
