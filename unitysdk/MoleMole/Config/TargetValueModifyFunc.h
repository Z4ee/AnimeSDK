#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TargetValueModifyFunc_TypeDefinitionIndex = 40840;

	enum class TargetValueModifyFunc : ::System::Int32
	{
		Add = 1,
		Replace = 3,
		Unknow = 0,
		Mul = 2,
	};
}
