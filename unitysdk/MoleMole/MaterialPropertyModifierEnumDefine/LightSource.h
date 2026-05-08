#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int LightSource_TypeDefinitionIndex = 46064;

	enum class LightSource : ::System::Byte
	{
		MainLight = 0x0,
		Point = 0x2,
		CameraView = 0x1,
	};
}
