#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CloudGraphicsSettingType_TypeDefinitionIndex = 57168;

	enum class CloudGraphicsSettingType : ::System::Int32
	{
		None = 0,
		GraphicsQuality = 1,
		Resolution = 2,
		FPS = 3,
		EnableVSync = 4,
		DLSS = 5,
		RenderingPrecision = 6,
		Shadow = 7,
		Reflection = 8,
		Character = 9,
		EnableSelfShadow = 10,
		EnvDetail = 11,
		SFX = 12,
		Bloom = 13,
		AAMode = 14,
		Light = 15,
	};
}
