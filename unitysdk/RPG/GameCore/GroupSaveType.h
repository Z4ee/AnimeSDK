#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupSaveType_TypeDefinitionIndex = 16486;

	enum class GroupSaveType : ::System::Int32
	{
		Temporary = 0,
		Permanent = 1,
		Reset = 2,
	};
}
