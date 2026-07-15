#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADPROGRESS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1535D700)
#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADPROGRESS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1535D770)
#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADPROGRESS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1535D6F0)
#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1535D680)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMC_LOGBACK_LogUploadProgress_TypeDefinitionIndex = 44771;

	class APMC_LOGBACK_LogUploadProgress : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADPROGRESS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADPROGRESS_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::Int32 a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADPROGRESS_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADPROGRESS_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
