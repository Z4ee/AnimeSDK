#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdaptionIndentType_TypeDefinitionIndex = 57410;

	enum class UIAdaptionIndentType : ::System::Int32
	{
		None = 0,
		ConstValue = 1,
		SafeArea = 2,
		ScreenSize = 4,
	};
}
