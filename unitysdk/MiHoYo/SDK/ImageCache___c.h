#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ImageCache_TextureAvailable; }
namespace UnityEngine { class Texture2D; }

#define MIHOYO_SDK_IMAGECACHE___C__ASYNCDOWNLOADTEXTURE_B__6_0_OFFSET UNITYSDK_OFFSET(0x1C8EDB50)
#define MIHOYO_SDK_IMAGECACHE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8EDB00)
#define MIHOYO_SDK_IMAGECACHE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8EDB40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ImageCache___c_TypeDefinitionIndex = 20090;

	class ImageCache___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ImageCache_TextureAvailable** StaticGet___9__6_0()
		{
			return (::MiHoYo::SDK::ImageCache_TextureAvailable**)Il2CppClass::FromTypeDefinitionIndex(ImageCache___c_TypeDefinitionIndex)->GetStaticField(0xAC80);
		}
		static ::MiHoYo::SDK::ImageCache___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::ImageCache___c**)Il2CppClass::FromTypeDefinitionIndex(ImageCache___c_TypeDefinitionIndex)->GetStaticField(0xAC88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE___C__CTOR_OFFSET))(this);
		}

		::System::Void _AsyncDownloadTexture_b__6_0(::UnityEngine::Texture2D* texture)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE___C__ASYNCDOWNLOADTEXTURE_B__6_0_OFFSET))(this, texture);
		}
	};
}
