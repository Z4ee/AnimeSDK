#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADSTART_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xB1A6440)
#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADSTART_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xB1A6490)
#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADSTART_INVOKE_OFFSET UNITYSDK_OFFSET(0xB1A6430)
#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADSTART__CTOR_OFFSET UNITYSDK_OFFSET(0xB1A63C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMC_LOGBACK_LogUploadStart_TypeDefinitionIndex = 46956;

	class APMC_LOGBACK_LogUploadStart : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADSTART__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADSTART_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADSTART_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADSTART_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
