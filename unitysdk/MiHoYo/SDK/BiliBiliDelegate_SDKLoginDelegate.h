#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class BiliBiliDelegate_LoginCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGINDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B73D590)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGINDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B73D5C0)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGINDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B73D580)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGINDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B73D510)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BiliBiliDelegate_SDKLoginDelegate_TypeDefinitionIndex = 7554;

	class BiliBiliDelegate_SDKLoginDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGINDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::MiHoYo::SDK::BiliBiliDelegate_LoginCallback* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MiHoYo::SDK::BiliBiliDelegate_LoginCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGINDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::BiliBiliDelegate_LoginCallback* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::BiliBiliDelegate_LoginCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGINDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGINDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
