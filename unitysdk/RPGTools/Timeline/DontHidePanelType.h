#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int DontHidePanelType_TypeDefinitionIndex = 46456;

	enum class DontHidePanelType : ::System::Int32
	{
		None = 0,
		BGImage = 1,
		SimpleTalk = 2,
		BlackMask = 4,
	};
}
