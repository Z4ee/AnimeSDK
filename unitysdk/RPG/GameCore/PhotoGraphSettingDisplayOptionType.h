#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphSettingDisplayOptionType_TypeDefinitionIndex = 18828;

	enum class PhotoGraphSettingDisplayOptionType : ::System::Int32
	{
		Unknown = 0,
		All = 1,
		FirstPerspectiveOnly = 2,
		ThirdPerspectiveOnly = 3,
	};
}
