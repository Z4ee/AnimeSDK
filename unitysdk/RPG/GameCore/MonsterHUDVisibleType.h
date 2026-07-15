#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterHUDVisibleType_TypeDefinitionIndex = 23794;

	enum class MonsterHUDVisibleType : ::System::Int32
	{
		Default = 0,
		OnlySpecialMark = 1,
	};
}
