#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTFILEMAPPING_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1535D460)
#define MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTFILEMAPPING_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1535D500)
#define MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTFILEMAPPING_INVOKE_OFFSET UNITYSDK_OFFSET(0x1535D430)
#define MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTFILEMAPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1535D3C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMC_LOGBACK_LogAttachmentFileMapping_TypeDefinitionIndex = 44774;

	class APMC_LOGBACK_LogAttachmentFileMapping : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTFILEMAPPING__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* Invoke(::System::IntPtr a1, ::System::String* a2, ::System::Int64 a3, ::System::Int64 a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::IntPtr, ::System::String*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTFILEMAPPING_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::String* a2, ::System::Int64 a3, ::System::Int64 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::String*, ::System::Int64, ::System::Int64, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTFILEMAPPING_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::String* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGATTACHMENTFILEMAPPING_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
