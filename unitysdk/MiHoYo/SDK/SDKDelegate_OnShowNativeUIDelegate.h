#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SDKDELEGATE_ONSHOWNATIVEUIDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B33CDB0)
#define MIHOYO_SDK_SDKDELEGATE_ONSHOWNATIVEUIDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B33CDF0)
#define MIHOYO_SDK_SDKDELEGATE_ONSHOWNATIVEUIDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B33C830)
#define MIHOYO_SDK_SDKDELEGATE_ONSHOWNATIVEUIDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B33C810)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_OnShowNativeUIDelegate_TypeDefinitionIndex = 19568;

	class SDKDelegate_OnShowNativeUIDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONSHOWNATIVEUIDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* strUIName, ::System::String* strParams)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONSHOWNATIVEUIDELEGATE_INVOKE_OFFSET))(this, strUIName, strParams);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* strUIName, ::System::String* strParams, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONSHOWNATIVEUIDELEGATE_BEGININVOKE_OFFSET))(this, strUIName, strParams, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_ONSHOWNATIVEUIDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
