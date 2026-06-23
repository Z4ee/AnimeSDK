#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int SecondaryEmissionBlendMode_TypeDefinitionIndex = 46733;

	enum class SecondaryEmissionBlendMode : ::System::Byte
	{
		MulMask = 0x2,
		Normal = 0x0,
		Mul = 0x1,
	};
}
