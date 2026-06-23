#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RecorderUnitType_TypeDefinitionIndex = 32181;

	enum class RecorderUnitType : ::System::Int32
	{
		UnMaterialAttr = 0,
		TextureAttr = 1,
		FloatArrayAttr = 2,
		ColorAttr = 3,
		FloatAttr = 4,
		TextureInfoAttr = 5,
	};
}
