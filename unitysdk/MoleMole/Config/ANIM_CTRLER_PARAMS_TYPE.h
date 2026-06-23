#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ANIM_CTRLER_PARAMS_TYPE_TypeDefinitionIndex = 60060;

	enum class ANIM_CTRLER_PARAMS_TYPE : ::System::Int32
	{
		INT = 3,
		FLOAT = 4,
		TRIGGER = 1,
		UNKNOWN = 0,
		BOOL = 2,
	};
}
