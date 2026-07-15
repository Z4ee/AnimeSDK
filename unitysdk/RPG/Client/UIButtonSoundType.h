#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIButtonSoundType_TypeDefinitionIndex = 57089;

	enum class UIButtonSoundType : ::System::Int32
	{
		CommonClick = 0,
		Confirm = 1,
		CommonCancel = 2,
		Invalid = 3,
		Special = 4,
		OpenDropDown = 5,
		Select = 6,
		Unselect = 7,
		SlideClick = 8,
		Mute = 100,
	};
}
