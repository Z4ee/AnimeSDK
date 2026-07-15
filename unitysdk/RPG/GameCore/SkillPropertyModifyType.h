#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillPropertyModifyType_TypeDefinitionIndex = 23885;

	enum class SkillPropertyModifyType : ::System::Int32
	{
		Unknow = 0,
		Add = 1,
		Mul = 2,
		Div = 3,
		Set = 4,
		Unset = 5,
	};
}
