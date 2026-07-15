#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Texture2D; }

#define MIHOYO_SDK_IMAGECACHE_TEXTUREAVAILABLE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18202730)
#define MIHOYO_SDK_IMAGECACHE_TEXTUREAVAILABLE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18202760)
#define MIHOYO_SDK_IMAGECACHE_TEXTUREAVAILABLE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18202420)
#define MIHOYO_SDK_IMAGECACHE_TEXTUREAVAILABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x182026C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ImageCache_TextureAvailable_TypeDefinitionIndex = 7931;

	class ImageCache_TextureAvailable : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_TEXTUREAVAILABLE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_TEXTUREAVAILABLE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Texture2D* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_TEXTUREAVAILABLE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_IMAGECACHE_TEXTUREAVAILABLE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
