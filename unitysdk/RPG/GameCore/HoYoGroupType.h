#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HoYoGroupType_TypeDefinitionIndex = 16636;

	enum class HoYoGroupType : ::System::Int32
	{
		Standard = 0,
		Container = 1,
	};
}
