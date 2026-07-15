#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_UNLOADASSETDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x17120640)
#define MIHOYO_SDK_SDKDELEGATE_UNLOADASSETDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17120670)
#define MIHOYO_SDK_SDKDELEGATE_UNLOADASSETDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1711E600)
#define MIHOYO_SDK_SDKDELEGATE_UNLOADASSETDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17120550)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_UnLoadAssetDelegate_TypeDefinitionIndex = 7739;

	class SDKDelegate_UnLoadAssetDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_UNLOADASSETDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_UNLOADASSETDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Object* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_UNLOADASSETDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_UNLOADASSETDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
