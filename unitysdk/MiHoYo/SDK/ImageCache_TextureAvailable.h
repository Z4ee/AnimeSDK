#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Texture2D; }

#define MIHOYO_SDK_IMAGECACHE_TEXTUREAVAILABLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1755E330)
#define MIHOYO_SDK_IMAGECACHE_TEXTUREAVAILABLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1755E360)
#define MIHOYO_SDK_IMAGECACHE_TEXTUREAVAILABLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1755DB50)
#define MIHOYO_SDK_IMAGECACHE_TEXTUREAVAILABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1755D660)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ImageCache_TextureAvailable_TypeDefinitionIndex = 7022;

	class ImageCache_TextureAvailable : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_TEXTUREAVAILABLE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Texture2D* texture)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_TEXTUREAVAILABLE_INVOKE_OFFSET))(this, texture);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Texture2D* texture, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_TEXTUREAVAILABLE_BEGININVOKE_OFFSET))(this, texture, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_TEXTUREAVAILABLE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
