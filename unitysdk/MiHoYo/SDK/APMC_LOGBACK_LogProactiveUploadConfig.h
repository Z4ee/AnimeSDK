#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class APMC_LOGBACK_LogAttachmentUploaded; }
namespace MiHoYo::SDK { class APMC_LOGBACK_LogUploadStart; }
namespace MiHoYo::SDK { class APMC_LOGBACK_LogUploaded; }

#define MIHOYO_SDK_APMC_LOGBACK_LOGPROACTIVEUPLOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x8CDBB30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMC_LOGBACK_LogProactiveUploadConfig_TypeDefinitionIndex = 43110;

	class APMC_LOGBACK_LogProactiveUploadConfig : public ::System::Object
	{
	public:
		::MiHoYo::SDK::APMC_LOGBACK_LogUploadStart* log_upload_start; // 0x10
		::MiHoYo::SDK::APMC_LOGBACK_LogUploaded* log_uploaded; // 0x18
		::MiHoYo::SDK::APMC_LOGBACK_LogUploadStart* attachment_upload_start; // 0x20
		::MiHoYo::SDK::APMC_LOGBACK_LogAttachmentUploaded* attachment_uploaded; // 0x28
		::System::IntPtr opaque; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_APMC_LOGBACK_LOGPROACTIVEUPLOADCONFIG__CTOR_OFFSET))(this);
		}
	};
}
