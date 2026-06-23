#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_UNLOADASSETDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BE61FF0)
#define MIHOYO_SDK_SDKDELEGATE_UNLOADASSETDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BE62020)
#define MIHOYO_SDK_SDKDELEGATE_UNLOADASSETDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BE61AF0)
#define MIHOYO_SDK_SDKDELEGATE_UNLOADASSETDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE61AD0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_UnLoadAssetDelegate_TypeDefinitionIndex = 19547;

	class SDKDelegate_UnLoadAssetDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_UNLOADASSETDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Object* assetToUnload)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_UNLOADASSETDELEGATE_INVOKE_OFFSET))(this, assetToUnload);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Object* assetToUnload, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_UNLOADASSETDELEGATE_BEGININVOKE_OFFSET))(this, assetToUnload, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_UNLOADASSETDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
