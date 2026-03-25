#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTUPLOADED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x84B3B30)
#define MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTUPLOADED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x84B3BD0)
#define MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTUPLOADED_INVOKE_OFFSET UNITYSDK_OFFSET(0x84B3730)
#define MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTUPLOADED__CTOR_OFFSET UNITYSDK_OFFSET(0x84B3710)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMC_LOGBACK_LogAttachmentUploaded_TypeDefinitionIndex = 37253;

	class APMC_LOGBACK_LogAttachmentUploaded : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTUPLOADED__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr opaque, ::System::Boolean result, ::System::String* path, ::System::String* error_info)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTUPLOADED_INVOKE_OFFSET))(this, opaque, result, path, error_info);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr opaque, ::System::Boolean result, ::System::String* path, ::System::String* error_info, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Boolean, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTUPLOADED_BEGININVOKE_OFFSET))(this, opaque, result, path, error_info, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTUPLOADED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
