#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ImageCache_TextureAvailable; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Texture2D; }

#define MIHOYO_SDK_IMAGECACHE_ASYNCDOWNLOADTEXTURE_OFFSET UNITYSDK_OFFSET(0x15F13F20)
#define MIHOYO_SDK_IMAGECACHE_GETIMAGE_OFFSET UNITYSDK_OFFSET(0x15F143C0)
#define MIHOYO_SDK_IMAGECACHE_GETLOCALCACHEKEY_OFFSET UNITYSDK_OFFSET(0x15F14600)
#define MIHOYO_SDK_IMAGECACHE_GETLOCALCACHEPATH_OFFSET UNITYSDK_OFFSET(0x15F14590)
#define MIHOYO_SDK_IMAGECACHE_IMAGETEXTURECACHEDIR_OFFSET UNITYSDK_OFFSET(0x15F15070)
#define MIHOYO_SDK_IMAGECACHE_ISLOCALCACHEEXISTS_OFFSET UNITYSDK_OFFSET(0x15F13E10)
#define MIHOYO_SDK_IMAGECACHE_ONTEXTUREDOWNLOADCOMPLETED_OFFSET UNITYSDK_OFFSET(0x15F14650)
#define MIHOYO_SDK_IMAGECACHE_PUTIMAGE_OFFSET UNITYSDK_OFFSET(0x15F13DB0)
#define MIHOYO_SDK_IMAGECACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F15140)
#define MIHOYO_SDK_IMAGECACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x15F13D30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ImageCache_TypeDefinitionIndex = 6975;

	class ImageCache : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ImageCache** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::ImageCache**)Il2CppClass::FromTypeDefinitionIndex(ImageCache_TypeDefinitionIndex)->GetStaticField(0x10340);
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

		::System::Void PutImage(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_PUTIMAGE_OFFSET))(this, url);
		}

		::UnityEngine::Texture2D* GetImage(::System::String* url, ::MiHoYo::SDK::ImageCache_TextureAvailable* availableCallback)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::ImageCache_TextureAvailable*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_GETIMAGE_OFFSET))(this, url, availableCallback);
		}

		::System::Void AsyncDownloadTexture(::System::String* url, ::MiHoYo::SDK::ImageCache_TextureAvailable* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::ImageCache_TextureAvailable*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_ASYNCDOWNLOADTEXTURE_OFFSET))(this, url, callback);
		}

		::System::Void OnTextureDownloadCompleted(::System::String* url, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_ONTEXTUREDOWNLOADCOMPLETED_OFFSET))(this, url, data);
		}

		static ::System::String* ImageTextureCacheDir()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_IMAGETEXTURECACHEDIR_OFFSET))();
		}

		static ::System::String* GetLocalCacheKey(::System::String* url)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_GETLOCALCACHEKEY_OFFSET))(url);
		}

		static ::System::String* GetLocalCachePath(::System::String* url)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_GETLOCALCACHEPATH_OFFSET))(url);
		}

		static ::System::Boolean IsLocalCacheExists(::System::String* url)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_ISLOCALCACHEEXISTS_OFFSET))(url);
		}
	};
}
