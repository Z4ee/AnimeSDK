#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MatCapBlendMode_TypeDefinitionIndex = 55805;

	enum class MatCapBlendMode : ::System::Byte
	{
		Add = 0x1,
		Overlay = 0x2,
		AlphaBlended = 0x0,
	};
}
