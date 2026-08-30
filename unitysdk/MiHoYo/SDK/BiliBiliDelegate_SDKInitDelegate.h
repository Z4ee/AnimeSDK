#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class BiliBiliDelegate_InitCallback; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_BILIBILIDELEGATE_SDKINITDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A1A4B60)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKINITDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A1A4C10)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKINITDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A1A4B20)
#define MIHOYO_SDK_BILIBILIDELEGATE_SDKINITDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1A4AA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BiliBiliDelegate_SDKInitDelegate_TypeDefinitionIndex = 7552;

	class BiliBiliDelegate_SDKInitDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKINITDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::System::String* a1, ::System::IntPtr a2, ::System::Boolean a3, ::System::Boolean a4, ::MiHoYo::SDK::BiliBiliDelegate_InitCallback* a5)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::IntPtr, ::System::Boolean, ::System::Boolean, ::MiHoYo::SDK::BiliBiliDelegate_InitCallback*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKINITDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::IntPtr a2, ::System::Boolean a3, ::System::Boolean a4, ::MiHoYo::SDK::BiliBiliDelegate_InitCallback* a5, ::System::AsyncCallback* a6, ::System::Object* a7)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::IntPtr, ::System::Boolean, ::System::Boolean, ::MiHoYo::SDK::BiliBiliDelegate_InitCallback*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKINITDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE_SDKINITDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
