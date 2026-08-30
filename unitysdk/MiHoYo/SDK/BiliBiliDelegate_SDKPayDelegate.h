#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class BiliBiliDelegate_PayCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_BILIBILIDELEGATE_SDKPAYDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B73D760)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKPAYDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B73D7A0)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKPAYDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B73D750)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKPAYDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B73D6D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BiliBiliDelegate_SDKPayDelegate_TypeDefinitionIndex = 7555;

	class BiliBiliDelegate_SDKPayDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKPAYDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::System::String* a1, ::MiHoYo::SDK::BiliBiliDelegate_PayCallback* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::BiliBiliDelegate_PayCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKPAYDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::MiHoYo::SDK::BiliBiliDelegate_PayCallback* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::BiliBiliDelegate_PayCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKPAYDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKPAYDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
