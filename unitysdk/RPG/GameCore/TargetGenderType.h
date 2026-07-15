#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetGenderType_TypeDefinitionIndex = 13925;

	enum class TargetGenderType : ::System::Int32
	{
		TARGET_GENDER_NONE = 0,
		TARGET_GENDER_MAN = 1,
		TARGET_GENDER_WOMAN = 2,
		TARGET_GENDER_ALL = 3,
	};
}
