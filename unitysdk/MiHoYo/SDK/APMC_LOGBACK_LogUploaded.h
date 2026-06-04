#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA1344D0)
#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA134550)
#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADED_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1344B0)
#define MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADED__CTOR_OFFSET UNITYSDK_OFFSET(0xA134440)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMC_LOGBACK_LogUploaded_TypeDefinitionIndex = 43910;

	class APMC_LOGBACK_LogUploaded : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADED__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADED_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::Boolean a2, ::System::String* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Boolean, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADED_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGUPLOADED_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
