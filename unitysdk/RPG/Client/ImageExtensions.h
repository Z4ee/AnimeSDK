#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_IMAGEEXTENSIONS_SAFESETALPHA_OFFSET UNITYSDK_OFFSET(0x9938E00)
#define RPG_CLIENT_IMAGEEXTENSIONS_SAFESETCOLOR_OFFSET UNITYSDK_OFFSET(0x9938EF0)
#define RPG_CLIENT_IMAGEEXTENSIONS_SAFESETSPRITE_OFFSET UNITYSDK_OFFSET(0x9938D00)

namespace RPG::Client
{
	inline static constexpr unsigned int ImageExtensions_TypeDefinitionIndex = 59646;

	class ImageExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Sprite* SafeSetSprite(::UnityEngine::UI::Image* image, ::System::String* path, ::System::Boolean outputError)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::UI::Image*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGEEXTENSIONS_SAFESETSPRITE_OFFSET))(image, path, outputError);
		}

		static ::System::Void SafeSetAlpha(::UnityEngine::UI::Image* image, ::System::Single alpha, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Image*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGEEXTENSIONS_SAFESETALPHA_OFFSET))(image, alpha, outputError);
		}

		static ::System::Void SafeSetColor(::UnityEngine::UI::Image* image, ::System::String* colorString, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Image*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGEEXTENSIONS_SAFESETCOLOR_OFFSET))(image, colorString, outputError);
		}
	};
}
