#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTUPLOADED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA134190)
#define MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTUPLOADED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA134230)
#define MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTUPLOADED_INVOKE_OFFSET UNITYSDK_OFFSET(0xA134160)
#define MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTUPLOADED__CTOR_OFFSET UNITYSDK_OFFSET(0xA1340F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMC_LOGBACK_LogAttachmentUploaded_TypeDefinitionIndex = 43911;

	class APMC_LOGBACK_LogAttachmentUploaded : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTUPLOADED__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1, ::System::Boolean a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTUPLOADED_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::Boolean a2, ::System::String* a3, ::System::String* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Boolean, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTUPLOADED_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTUPLOADED_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
