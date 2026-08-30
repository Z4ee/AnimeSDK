#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ImageCache_TextureAvailable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Texture2D; }

#define MIHOYO_SDK_IMAGECACHE_ASYNCDOWNLOADTEXTURE_OFFSET UNITYSDK_OFFSET(0x1B97DD30)
#define MIHOYO_SDK_IMAGECACHE_GETIMAGE_OFFSET UNITYSDK_OFFSET(0x1B97E220)
#define MIHOYO_SDK_IMAGECACHE_GETLOCALCACHEKEY_OFFSET UNITYSDK_OFFSET(0x1B97E460)
#define MIHOYO_SDK_IMAGECACHE_GETLOCALCACHEPATH_OFFSET UNITYSDK_OFFSET(0x1B97E3F0)
#define MIHOYO_SDK_IMAGECACHE_IMAGETEXTURECACHEDIR_OFFSET UNITYSDK_OFFSET(0x1B97EA10)
#define MIHOYO_SDK_IMAGECACHE_ISLOCALCACHEEXISTS_OFFSET UNITYSDK_OFFSET(0x1B97DC20)
#define MIHOYO_SDK_IMAGECACHE_ONTEXTUREDOWNLOADCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1B97E490)
#define MIHOYO_SDK_IMAGECACHE_PUTIMAGE_OFFSET UNITYSDK_OFFSET(0x1B97DBC0)
#define MIHOYO_SDK_IMAGECACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B97EAE0)
#define MIHOYO_SDK_IMAGECACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B97DB40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ImageCache_TypeDefinitionIndex = 7934;

	class ImageCache : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ImageCache** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::ImageCache**)Il2CppClass::FromTypeDefinitionIndex(ImageCache_TypeDefinitionIndex)->GetStaticField(0x6E20);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::ImageCache_TextureAvailable*>* availableCallbackMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE__CCTOR_OFFSET))();
		}

		::System::Void PutImage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_PUTIMAGE_OFFSET))(this, a1);
		}

		::UnityEngine::Texture2D* GetImage(::System::String* a1, ::MiHoYo::SDK::ImageCache_TextureAvailable* a2)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::ImageCache_TextureAvailable*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_GETIMAGE_OFFSET))(this, a1, a2);
		}

		::System::Void AsyncDownloadTexture(::System::String* a1, ::MiHoYo::SDK::ImageCache_TextureAvailable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::ImageCache_TextureAvailable*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_ASYNCDOWNLOADTEXTURE_OFFSET))(this, a1, a2);
		}

		::System::Void OnTextureDownloadCompleted(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_ONTEXTUREDOWNLOADCOMPLETED_OFFSET))(this, a1, a2);
		}

		static ::System::String* ImageTextureCacheDir()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_IMAGETEXTURECACHEDIR_OFFSET))();
		}

		static ::System::String* GetLocalCacheKey(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_GETLOCALCACHEKEY_OFFSET))(a1);
		}

		static ::System::String* GetLocalCachePath(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_GETLOCALCACHEPATH_OFFSET))(a1);
		}

		static ::System::Boolean IsLocalCacheExists(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_ISLOCALCACHEEXISTS_OFFSET))(a1);
		}
	};
}
