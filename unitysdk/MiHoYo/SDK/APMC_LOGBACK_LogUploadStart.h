#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADSTART_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D27CAD0)
#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADSTART_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D27CB20)
#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADSTART_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D27C7C0)
#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1D27C7A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMC_LOGBACK_LogUploadStart_TypeDefinitionIndex = 37544;

	class APMC_LOGBACK_LogUploadStart : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADSTART__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr opaque)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADSTART_INVOKE_OFFSET))(this, opaque);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr opaque, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADSTART_BEGININVOKE_OFFSET))(this, opaque, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADSTART_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
