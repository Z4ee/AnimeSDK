#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int SecondaryEmissionBlendMode_TypeDefinitionIndex = 47253;

	enum class SecondaryEmissionBlendMode : ::System::Byte
	{
		Mul = 0x1,
		MulMask = 0x2,
		Normal = 0x0,
	};
}
