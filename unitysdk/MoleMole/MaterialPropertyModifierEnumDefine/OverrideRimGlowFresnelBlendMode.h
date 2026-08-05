#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int OverrideRimGlowFresnelBlendMode_TypeDefinitionIndex = 51519;

	enum class OverrideRimGlowFresnelBlendMode : ::System::Byte
	{
		Mul = 0x2,
		Blend = 0x1,
		Add = 0x0,
	};
}
