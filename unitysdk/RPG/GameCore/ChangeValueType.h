#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeValueType_TypeDefinitionIndex = 22035;

	enum class ChangeValueType : ::System::Int32
	{
		Delta = 0,
		RawDelta = 1,
		ClampedAdd = 2,
	};
}
