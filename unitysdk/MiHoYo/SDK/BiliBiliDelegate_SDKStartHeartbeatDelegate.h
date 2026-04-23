#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class BiliBiliDelegate_AntiAddictionCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_BILIBILIDELEGATE_SDKSTARTHEARTBEATDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x173E8470)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKSTARTHEARTBEATDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x173E84A0)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKSTARTHEARTBEATDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x173E7F10)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKSTARTHEARTBEATDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x173E7EF0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BiliBiliDelegate_SDKStartHeartbeatDelegate_TypeDefinitionIndex = 6659;

	class BiliBiliDelegate_SDKStartHeartbeatDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKSTARTHEARTBEATDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::MiHoYo::SDK::BiliBiliDelegate_AntiAddictionCallback* callBack)
		{
			return ((::System::Int32(*)(::PVOID, ::MiHoYo::SDK::BiliBiliDelegate_AntiAddictionCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKSTARTHEARTBEATDELEGATE_INVOKE_OFFSET))(this, callBack);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::BiliBiliDelegate_AntiAddictionCallback* callBack, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::BiliBiliDelegate_AntiAddictionCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKSTARTHEARTBEATDELEGATE_BEGININVOKE_OFFSET))(this, callBack, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKSTARTHEARTBEATDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
