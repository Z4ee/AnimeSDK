#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int LightSource_TypeDefinitionIndex = 55154;

	enum class LightSource : ::System::Byte
	{
		CameraView = 0x1,
		Point = 0x2,
		MainLight = 0x0,
	};
}
