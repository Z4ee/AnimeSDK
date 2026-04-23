#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleSavedValueType_TypeDefinitionIndex = 12763;

	enum class GridFightRoleSavedValueType : ::System::Int32
	{
		Unknow = 0,
		Local = 1,
		Global = 2,
	};
}
