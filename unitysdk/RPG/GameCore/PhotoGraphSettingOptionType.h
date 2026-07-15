#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphSettingOptionType_TypeDefinitionIndex = 18303;

	enum class PhotoGraphSettingOptionType : ::System::Int32
	{
		Unknown = 0,
		Toggle = 1,
		Switch = 2,
	};
}
