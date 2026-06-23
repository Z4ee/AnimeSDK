#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGOUTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BB33910)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGOUTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BB33940)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGOUTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BB33670)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGOUTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB33650)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BiliBiliDelegate_SDKLogoutDelegate_TypeDefinitionIndex = 19365;

	class BiliBiliDelegate_SDKLogoutDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGOUTDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGOUTDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGOUTDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGOUTDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
