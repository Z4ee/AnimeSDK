#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EzySlice/TextureRegion.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }

#define EZYSLICE_TEXTUREREGIONEXTENSION_GETTEXTUREREGION_1_OFFSET UNITYSDK_OFFSET(0xA117600)
#define EZYSLICE_TEXTUREREGIONEXTENSION_GETTEXTUREREGION_OFFSET UNITYSDK_OFFSET(0xA1174E0)

namespace EzySlice
{
	inline static constexpr unsigned int TextureRegionExtension_TypeDefinitionIndex = 44354;

	class TextureRegionExtension : public ::System::Object
	{
	public:
		static ::EzySlice::TextureRegion GetTextureRegion(::UnityEngine::Material* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::EzySlice::TextureRegion(*)(::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGIONEXTENSION_GETTEXTUREREGION_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::EzySlice::TextureRegion GetTextureRegion_1(::UnityEngine::Texture* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::EzySlice::TextureRegion(*)(::UnityEngine::Texture*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EZYSLICE_TEXTUREREGIONEXTENSION_GETTEXTUREREGION_1_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
