#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ImageCache_TextureAvailable; }
namespace UnityEngine { class Texture2D; }

#define MIHOYO_SDK_IMAGECACHE___C__ASYNCDOWNLOADTEXTURE_B__6_0_OFFSET UNITYSDK_OFFSET(0x182025E0)
#define MIHOYO_SDK_IMAGECACHE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18202590)
#define MIHOYO_SDK_IMAGECACHE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x182025D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ImageCache___c_TypeDefinitionIndex = 7933;

	class ImageCache___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ImageCache_TextureAvailable** StaticGet___9__6_0()
		{
			return (::MiHoYo::SDK::ImageCache_TextureAvailable**)Il2CppClass::FromTypeDefinitionIndex(ImageCache___c_TypeDefinitionIndex)->GetStaticField(0x1DE20);
		}
		static ::MiHoYo::SDK::ImageCache___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::ImageCache___c**)Il2CppClass::FromTypeDefinitionIndex(ImageCache___c_TypeDefinitionIndex)->GetStaticField(0x1DE28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE___C__CTOR_OFFSET))(this);
		}

		::System::Void _AsyncDownloadTexture_b__6_0(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE___C__ASYNCDOWNLOADTEXTURE_B__6_0_OFFSET))(this, a1);
		}
	};
}
