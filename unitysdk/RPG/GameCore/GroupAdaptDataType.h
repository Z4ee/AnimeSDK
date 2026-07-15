#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupAdaptDataType_TypeDefinitionIndex = 23667;

	enum class GroupAdaptDataType : ::System::Int32
	{
		GroupProperty = 0,
		FSV = 1,
		FCV = 2,
	};
}
