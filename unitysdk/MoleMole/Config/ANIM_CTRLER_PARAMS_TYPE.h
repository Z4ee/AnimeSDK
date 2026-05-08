#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ANIM_CTRLER_PARAMS_TYPE_TypeDefinitionIndex = 78001;

	enum class ANIM_CTRLER_PARAMS_TYPE : ::System::Int32
	{
		INT = 3,
		FLOAT = 4,
		UNKNOWN = 0,
		TRIGGER = 1,
		BOOL = 2,
	};
}
