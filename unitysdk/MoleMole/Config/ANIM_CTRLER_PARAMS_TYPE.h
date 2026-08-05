#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ANIM_CTRLER_PARAMS_TYPE_TypeDefinitionIndex = 65710;

	enum class ANIM_CTRLER_PARAMS_TYPE : ::System::Int32
	{
		BOOL = 2,
		INT = 3,
		TRIGGER = 1,
		FLOAT = 4,
		UNKNOWN = 0,
	};
}
