#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A49AAE0)
#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A49AB80)
#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A49A750)
#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADED__CTOR_OFFSET UNITYSDK_OFFSET(0x1A49A740)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMC_LOGBACK_LogUploaded_TypeDefinitionIndex = 35321;

	class APMC_LOGBACK_LogUploaded : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADED__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr opaque, ::System::Boolean result, ::System::String* error_info)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADED_INVOKE_OFFSET))(this, opaque, result, error_info);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr opaque, ::System::Boolean result, ::System::String* error_info, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Boolean, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADED_BEGININVOKE_OFFSET))(this, opaque, result, error_info, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
