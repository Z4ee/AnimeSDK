#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class BiliBiliDelegate_InitCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_BILIBILIDELEGATE_SDKINITDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CF1CDB0)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKINITDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CF1CE90)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKINITDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF1C690)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKINITDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF1C670)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BiliBiliDelegate_SDKInitDelegate_TypeDefinitionIndex = 19707;

	class BiliBiliDelegate_SDKInitDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKINITDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::System::String* szGameInfo, ::System::IntPtr hwndParent, ::System::Boolean bExclusiveMode, ::System::Boolean bEnableMultiOpen, ::MiHoYo::SDK::BiliBiliDelegate_InitCallback* callBack)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::IntPtr, ::System::Boolean, ::System::Boolean, ::MiHoYo::SDK::BiliBiliDelegate_InitCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKINITDELEGATE_INVOKE_OFFSET))(this, szGameInfo, hwndParent, bExclusiveMode, bEnableMultiOpen, callBack);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* szGameInfo, ::System::IntPtr hwndParent, ::System::Boolean bExclusiveMode, ::System::Boolean bEnableMultiOpen, ::MiHoYo::SDK::BiliBiliDelegate_InitCallback* callBack, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::IntPtr, ::System::Boolean, ::System::Boolean, ::MiHoYo::SDK::BiliBiliDelegate_InitCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKINITDELEGATE_BEGININVOKE_OFFSET))(this, szGameInfo, hwndParent, bExclusiveMode, bEnableMultiOpen, callBack, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKINITDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
