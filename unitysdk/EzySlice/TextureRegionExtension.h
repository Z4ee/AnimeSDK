#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EzySlice/TextureRegion.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define EZYSLICE_TEXTUREREGIONEXTENSION_GETTEXTUREREGION_1_OFFSET UNITYSDK_OFFSET(0x83E3440)
#define EZYSLICE_TEXTUREREGIONEXTENSION_GETTEXTUREREGION_OFFSET UNITYSDK_OFFSET(0x83E3320)

namespace EzySlice
{
	inline static constexpr unsigned int TextureRegionExtension_TypeDefinitionIndex = 37935;

	class TextureRegionExtension : public ::System::Object
	{
	public:
		static ::EzySlice::TextureRegion GetTextureRegion(::UnityEngine::Material* mat, ::System::Int32 pixX, ::System::Int32 pixY, ::System::Int32 pixWidth, ::System::Int32 pixHeight)
		{
			return ((::EzySlice::TextureRegion(*)(::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGIONEXTENSION_GETTEXTUREREGION_OFFSET))(mat, pixX, pixY, pixWidth, pixHeight);
		}

		static ::EzySlice::TextureRegion GetTextureRegion_1(::UnityEngine::Texture* tex, ::System::Int32 pixX, ::System::Int32 pixY, ::System::Int32 pixWidth, ::System::Int32 pixHeight)
		{
			return ((::EzySlice::TextureRegion(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGIONEXTENSION_GETTEXTUREREGION_1_OFFSET))(tex, pixX, pixY, pixWidth, pixHeight);
		}
	};
}
