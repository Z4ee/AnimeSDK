#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphSettingItemType_TypeDefinitionIndex = 18302;

	enum class PhotoGraphSettingItemType : ::System::Int32
	{
		Unknown = 0,
		LookAtCamera = 1,
		HideCharacter = 2,
		HideUID = 3,
		HideLogo = 4,
		HideHighLight = 5,
		BodyBackFace = 6,
		DefaultFirstPerspective = 7,
		HidePet = 8,
	};
}
