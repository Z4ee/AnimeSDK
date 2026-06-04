#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_CHECKHTTPDNSPLUSENABLEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1841F3F0)
#define MIHOYO_SDK_SDKDELEGATE_CHECKHTTPDNSPLUSENABLEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1841F420)
#define MIHOYO_SDK_SDKDELEGATE_CHECKHTTPDNSPLUSENABLEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1841F3E0)
#define MIHOYO_SDK_SDKDELEGATE_CHECKHTTPDNSPLUSENABLEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1841F370)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_CheckHttpDnsPlusEnableDelegate_TypeDefinitionIndex = 7750;

	class SDKDelegate_CheckHttpDnsPlusEnableDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_CHECKHTTPDNSPLUSENABLEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_CHECKHTTPDNSPLUSENABLEDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_CHECKHTTPDNSPLUSENABLEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_CHECKHTTPDNSPLUSENABLEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
