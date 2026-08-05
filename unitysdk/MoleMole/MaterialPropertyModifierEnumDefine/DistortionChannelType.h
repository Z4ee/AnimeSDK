#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int DistortionChannelType_TypeDefinitionIndex = 66564;

	enum class DistortionChannelType : ::System::Byte
	{
		B = 0x2,
		R = 0x0,
		G = 0x1,
		A = 0x3,
		RG = 0x4,
	};
}
