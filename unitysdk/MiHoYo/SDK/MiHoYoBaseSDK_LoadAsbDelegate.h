#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class AssetBundle; }

#define MIHOYO_SDK_MIHOYOBASESDK_LOADASBDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8D37E10)
#define MIHOYO_SDK_MIHOYOBASESDK_LOADASBDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8D37E40)
#define MIHOYO_SDK_MIHOYOBASESDK_LOADASBDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x8D378B0)
#define MIHOYO_SDK_MIHOYOBASESDK_LOADASBDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x8D37890)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoBaseSDK_LoadAsbDelegate_TypeDefinitionIndex = 42859;

	class MiHoYoBaseSDK_LoadAsbDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_LOADASBDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::UnityEngine::AssetBundle* Invoke(::System::String* path)
		{
			return ((::UnityEngine::AssetBundle*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_LOADASBDELEGATE_INVOKE_OFFSET))(this, path);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* path, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_LOADASBDELEGATE_BEGININVOKE_OFFSET))(this, path, callback, object);
		}

		::UnityEngine::AssetBundle* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::UnityEngine::AssetBundle*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_LOADASBDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
