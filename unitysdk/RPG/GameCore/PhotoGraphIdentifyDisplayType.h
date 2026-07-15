#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphIdentifyDisplayType_TypeDefinitionIndex = 16799;

	enum class PhotoGraphIdentifyDisplayType : ::System::Int32
	{
		Default = 0,
		March7thGuessTheSilhouette = 1,
		PhotoExhibition = 2,
		PhotoExhibition_HuaHuo = 3,
	};
}
