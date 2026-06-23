#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_SDKDELEGATE_CHECKHTTPDNSPLUSENABLEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B5CBF80)
#define MIHOYO_SDK_SDKDELEGATE_CHECKHTTPDNSPLUSENABLEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B5CBFB0)
#define MIHOYO_SDK_SDKDELEGATE_CHECKHTTPDNSPLUSENABLEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B5CBCE0)
#define MIHOYO_SDK_SDKDELEGATE_CHECKHTTPDNSPLUSENABLEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5CBCC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_CheckHttpDnsPlusEnableDelegate_TypeDefinitionIndex = 19564;

	class SDKDelegate_CheckHttpDnsPlusEnableDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_CHECKHTTPDNSPLUSENABLEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_CHECKHTTPDNSPLUSENABLEDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_CHECKHTTPDNSPLUSENABLEDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_CHECKHTTPDNSPLUSENABLEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
