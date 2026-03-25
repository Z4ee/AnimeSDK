#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FixedBitsetBoolResult_TypeDefinitionIndex = 45282;

	enum class FixedBitsetBoolResult : ::System::Int32
	{
		OnceTrue = 0,
		OnceFalse = 1,
	};
}
