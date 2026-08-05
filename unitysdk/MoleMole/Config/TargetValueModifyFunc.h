#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TargetValueModifyFunc_TypeDefinitionIndex = 64730;

	enum class TargetValueModifyFunc : ::System::Int32
	{
		Replace = 3,
		Unknow = 0,
		Add = 1,
		Mul = 2,
	};
}
