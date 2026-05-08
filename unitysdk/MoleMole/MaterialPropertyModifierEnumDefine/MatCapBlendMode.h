#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MatCapBlendMode_TypeDefinitionIndex = 41152;

	enum class MatCapBlendMode : ::System::Byte
	{
		Add = 0x1,
		AlphaBlended = 0x0,
		Overlay = 0x2,
	};
}
