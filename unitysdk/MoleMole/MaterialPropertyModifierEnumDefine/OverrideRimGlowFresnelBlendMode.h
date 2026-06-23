#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int OverrideRimGlowFresnelBlendMode_TypeDefinitionIndex = 41683;

	enum class OverrideRimGlowFresnelBlendMode : ::System::Byte
	{
		Add = 0x0,
		Blend = 0x1,
		Mul = 0x2,
	};
}
