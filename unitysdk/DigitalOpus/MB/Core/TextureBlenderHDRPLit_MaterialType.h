#pragma once
#include "unitysdk/unitysdk.h"

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int TextureBlenderHDRPLit_MaterialType_TypeDefinitionIndex = 94512;

	enum class TextureBlenderHDRPLit_MaterialType : ::System::Int32
	{
		unknown = 0,
		subsurfaceScattering = 1,
		standard = 2,
		anisotropy = 3,
		iridescence = 4,
		specularColor = 5,
		translucent = 6,
	};
}
