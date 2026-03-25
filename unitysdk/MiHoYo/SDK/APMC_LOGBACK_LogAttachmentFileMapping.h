#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTFILEMAPPING_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x84B3660)
#define MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTFILEMAPPING_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x84B3700)
#define MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTFILEMAPPING_INVOKE_OFFSET UNITYSDK_OFFSET(0x84B3270)
#define MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTFILEMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x84B3250)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMC_LOGBACK_LogAttachmentFileMapping_TypeDefinitionIndex = 37254;

	class APMC_LOGBACK_LogAttachmentFileMapping : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTFILEMAPPING__CTOR_OFFSET))(this, object, method);
		}

		::System::String* Invoke(::System::IntPtr opaque, ::System::String* file_mark, ::System::Int64 start_time, ::System::Int64 end_time)
		{
			return ((::System::String*(*)(::PVOID, ::System::IntPtr, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTFILEMAPPING_INVOKE_OFFSET))(this, opaque, file_mark, start_time, end_time);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr opaque, ::System::String* file_mark, ::System::Int64 start_time, ::System::Int64 end_time, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::String*, ::System::Int64, ::System::Int64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTFILEMAPPING_BEGININVOKE_OFFSET))(this, opaque, file_mark, start_time, end_time, callback, object);
		}

		::System::String* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTFILEMAPPING_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
