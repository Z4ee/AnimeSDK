#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenPickingGoodsDisplayType_TypeDefinitionIndex = 16136;

	enum class HipplenPickingGoodsDisplayType : ::System::Int32
	{
		Default = 0,
		VerticalFade = 1,
		HorizontalFade = 2,
		DownTopFade = 3,
		RightLeftFade = 4,
		TransparentFade = 5,
	};
}
