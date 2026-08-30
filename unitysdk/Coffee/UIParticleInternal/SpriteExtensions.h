#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture2D; }

#define COFFEE_UIPARTICLEINTERNAL_SPRITEEXTENSIONS_GETACTUALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1649F260)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int SpriteExtensions_TypeDefinitionIndex = 43932;

	class SpriteExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Texture2D* GetActualTexture(::UnityEngine::Sprite* a1)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_SPRITEEXTENSIONS_GETACTUALTEXTURE_OFFSET))(a1);
		}
	};
}
