#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GenderType_TypeDefinitionIndex = 10225;

	enum class GenderType : ::System::Int32
	{
		GENDER_NONE = 0,
		GENDER_MAN = 1,
		GENDER_WOMAN = 2,
	};
}
