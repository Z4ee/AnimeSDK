#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_SDKDELEGATE_GETMACADDRESSDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BAC8320)
#define MIHOYO_SDK_SDKDELEGATE_GETMACADDRESSDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BAC8350)
#define MIHOYO_SDK_SDKDELEGATE_GETMACADDRESSDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BAC8310)
#define MIHOYO_SDK_SDKDELEGATE_GETMACADDRESSDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAC82A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_GetMacAddressDelegate_TypeDefinitionIndex = 7746;

	class SDKDelegate_GetMacAddressDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETMACADDRESSDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* Invoke()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETMACADDRESSDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETMACADDRESSDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::String* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_GETMACADDRESSDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
