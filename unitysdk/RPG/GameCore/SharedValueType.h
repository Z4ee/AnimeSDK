#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SharedValueType_TypeDefinitionIndex = 10089;

	enum class SharedValueType : ::System::Int32
	{
		Float = 0,
		Int = 1,
		Uint = 2,
		String = 3,
		StringList = 4,
		JsonConfigList = 5,
		JsonConfig = 6,
	};
}
