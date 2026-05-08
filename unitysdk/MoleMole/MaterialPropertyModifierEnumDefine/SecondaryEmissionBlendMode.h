#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int SecondaryEmissionBlendMode_TypeDefinitionIndex = 65697;

	enum class SecondaryEmissionBlendMode : ::System::Byte
	{
		Normal = 0x0,
		MulMask = 0x2,
		Mul = 0x1,
	};
}
