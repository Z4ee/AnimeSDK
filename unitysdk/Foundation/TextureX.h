#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

namespace UnityEngine { class Texture; }

#define FOUNDATION_TEXTUREX_TEXPIXELSIZEBYTES_OFFSET UNITYSDK_OFFSET(0x1BFEC010)
#define FOUNDATION_TEXTUREX_TEXRUNNINGMEMSIZE_OFFSET UNITYSDK_OFFSET(0x1BFEBCB0)

namespace Foundation
{
	inline static constexpr unsigned int TextureX_TypeDefinitionIndex = 7998;

	class TextureX : public ::System::Object
	{
	public:
		static ::System::Int64 TexRunningMemSize(::UnityEngine::Texture* pTex)
		{
			return ((::System::Int64(*)(::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTUREX_TEXRUNNINGMEMSIZE_OFFSET))(pTex);
		}

		static ::System::Single TexPixelSizeBytes(::UnityEngine::TextureFormat pFormat)
		{
			return ((::System::Single(*)(::UnityEngine::TextureFormat))((::PBYTE)hIl2Cpp + FOUNDATION_TEXTUREX_TEXPIXELSIZEBYTES_OFFSET))(pFormat);
		}
	};
}
