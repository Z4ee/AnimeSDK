#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class BiliBiliDelegate_LoginCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGINDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D3AB530)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGINDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D3AB560)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGINDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D3AB010)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGINDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3AAFF0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BiliBiliDelegate_SDKLoginDelegate_TypeDefinitionIndex = 19709;

	class BiliBiliDelegate_SDKLoginDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGINDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::MiHoYo::SDK::BiliBiliDelegate_LoginCallback* callBack)
		{
			return ((::System::Int32(*)(::PVOID, ::MiHoYo::SDK::BiliBiliDelegate_LoginCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGINDELEGATE_INVOKE_OFFSET))(this, callBack);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::BiliBiliDelegate_LoginCallback* callBack, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::BiliBiliDelegate_LoginCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGINDELEGATE_BEGININVOKE_OFFSET))(this, callBack, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGINDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
