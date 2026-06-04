#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveAvatarPropertyTargetType_TypeDefinitionIndex = 13131;

	enum class IdleLiveAvatarPropertyTargetType : ::System::Int32
	{
		None = 0,
		Self = 1,
		All = 2,
	};
}
