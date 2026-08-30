#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_IMAGEEXTENSIONS_SAFESETALPHA_OFFSET UNITYSDK_OFFSET(0x19836CB0)
#define RPG_CLIENT_IMAGEEXTENSIONS_SAFESETCOLOR_OFFSET UNITYSDK_OFFSET(0x19836E10)
#define RPG_CLIENT_IMAGEEXTENSIONS_SAFESETSPRITE_OFFSET UNITYSDK_OFFSET(0x19822310)

namespace RPG::Client
{
	inline static constexpr unsigned int ImageExtensions_TypeDefinitionIndex = 72698;

	class ImageExtensions : public ::System::Object
	{
	public:
		static ::UnityEngine::Sprite* SafeSetSprite(::UnityEngine::UI::Image* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Sprite*(*)(::UnityEngine::UI::Image*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGEEXTENSIONS_SAFESETSPRITE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeSetAlpha(::UnityEngine::UI::Image* a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Image*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGEEXTENSIONS_SAFESETALPHA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeSetColor(::UnityEngine::UI::Image* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Image*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_IMAGEEXTENSIONS_SAFESETCOLOR_OFFSET))(a1, a2, a3);
		}
	};
}
