#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADPROGRESS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D281960)
#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADPROGRESS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D2819F0)
#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADPROGRESS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D281620)
#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D281600)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMC_LOGBACK_LogUploadProgress_TypeDefinitionIndex = 36884;

	class APMC_LOGBACK_LogUploadProgress : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADPROGRESS__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr opaque, ::System::Int32 progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADPROGRESS_INVOKE_OFFSET))(this, opaque, progress);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr opaque, ::System::Int32 progress, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADPROGRESS_BEGININVOKE_OFFSET))(this, opaque, progress, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADPROGRESS_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
