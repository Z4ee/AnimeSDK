#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MatCapBlendMode_TypeDefinitionIndex = 90764;

	enum class MatCapBlendMode : ::System::Byte
	{
		Overlay = 0x2,
		AlphaBlended = 0x0,
		Add = 0x1,
	};
}
