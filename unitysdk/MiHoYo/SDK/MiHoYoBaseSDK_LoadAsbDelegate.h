#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class AssetBundle; }

#define MIHOYO_SDK_MIHOYOBASESDK_LOADASBDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AD105B0)
#define MIHOYO_SDK_MIHOYOBASESDK_LOADASBDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AD105E0)
#define MIHOYO_SDK_MIHOYOBASESDK_LOADASBDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AD105A0)
#define MIHOYO_SDK_MIHOYOBASESDK_LOADASBDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD10530)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoBaseSDK_LoadAsbDelegate_TypeDefinitionIndex = 44523;

	class MiHoYoBaseSDK_LoadAsbDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_LOADASBDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AssetBundle* Invoke(::System::String* a1)
		{
			return ((::UnityEngine::AssetBundle*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_LOADASBDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_LOADASBDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::AssetBundle* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::UnityEngine::AssetBundle*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOBASESDK_LOADASBDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
