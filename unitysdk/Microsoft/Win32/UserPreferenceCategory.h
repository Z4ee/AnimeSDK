#pragma once
#include "unitysdk/unitysdk.h"

namespace Microsoft::Win32
{
	inline static constexpr unsigned int UserPreferenceCategory_TypeDefinitionIndex = 4309;

	enum class UserPreferenceCategory : ::System::Int32
	{
		Accessibility = 1,
		Color = 2,
		Desktop = 3,
		General = 4,
		Icon = 5,
		Keyboard = 6,
		Locale = 13,
		Menu = 7,
		Mouse = 8,
		Policy = 9,
		Power = 10,
		Screensaver = 11,
		VisualStyle = 14,
		Window = 12,
	};
}
