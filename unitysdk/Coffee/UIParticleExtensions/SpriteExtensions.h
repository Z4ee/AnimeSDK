#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture2D; }

#define COFFEE_UIPARTICLEEXTENSIONS_SPRITEEXTENSIONS_GETACTUALTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B58A3F0)

namespace Coffee::UIParticleExtensions
{
	inline static constexpr unsigned int SpriteExtensions_TypeDefinitionIndex = 32660;

	class SpriteExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Texture2D* GetActualTexture(::UnityEngine::Sprite* self)
		{
			return ((::UnityEngine::Texture2D*(*)(::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_SPRITEEXTENSIONS_GETACTUALTEXTURE_OFFSET))(self);
		}
	};
}
