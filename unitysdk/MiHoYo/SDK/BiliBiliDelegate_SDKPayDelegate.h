#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class BiliBiliDelegate_PayCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_BILIBILIDELEGATE_SDKPAYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15DEA620)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKPAYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15DEA660)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKPAYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15DEA060)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKPAYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15DEA040)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BiliBiliDelegate_SDKPayDelegate_TypeDefinitionIndex = 6624;

	class BiliBiliDelegate_SDKPayDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKPAYDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::System::String* info, ::MiHoYo::SDK::BiliBiliDelegate_PayCallback* callBack)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::BiliBiliDelegate_PayCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKPAYDELEGATE_INVOKE_OFFSET))(this, info, callBack);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* info, ::MiHoYo::SDK::BiliBiliDelegate_PayCallback* callBack, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::BiliBiliDelegate_PayCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKPAYDELEGATE_BEGININVOKE_OFFSET))(this, info, callBack, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKPAYDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
