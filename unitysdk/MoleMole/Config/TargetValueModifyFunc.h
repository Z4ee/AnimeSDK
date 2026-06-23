#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TargetValueModifyFunc_TypeDefinitionIndex = 43539;

	enum class TargetValueModifyFunc : ::System::Int32
	{
		Replace = 3,
		Add = 1,
		Unknow = 0,
		Mul = 2,
	};
}
