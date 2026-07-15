#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class BiliBiliDelegate_AntiAddictionCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_BILIBILIDELEGATE_SDKSTARTHEARTBEATDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1886D490)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKSTARTHEARTBEATDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1886D4C0)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKSTARTHEARTBEATDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1886D480)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKSTARTHEARTBEATDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1886D410)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BiliBiliDelegate_SDKStartHeartbeatDelegate_TypeDefinitionIndex = 7568;

	class BiliBiliDelegate_SDKStartHeartbeatDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKSTARTHEARTBEATDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::MiHoYo::SDK::BiliBiliDelegate_AntiAddictionCallback* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MiHoYo::SDK::BiliBiliDelegate_AntiAddictionCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKSTARTHEARTBEATDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::BiliBiliDelegate_AntiAddictionCallback* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::BiliBiliDelegate_AntiAddictionCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKSTARTHEARTBEATDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKSTARTHEARTBEATDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
