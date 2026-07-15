#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGOUTDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1886D2B0)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGOUTDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1886D2E0)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGOUTDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1886D2A0)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGOUTDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1886D230)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BiliBiliDelegate_SDKLogoutDelegate_TypeDefinitionIndex = 7569;

	class BiliBiliDelegate_SDKLogoutDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGOUTDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGOUTDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGOUTDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKLOGOUTDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
