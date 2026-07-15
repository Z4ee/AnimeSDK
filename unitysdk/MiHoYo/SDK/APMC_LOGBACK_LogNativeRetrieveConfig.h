#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMC_LOGBACK_LogNativeRetrieveConfig_TypeDefinitionIndex = 44778;

	struct alignas(8) APMC_LOGBACK_LogNativeRetrieveConfig
	{
		::System::IntPtr log_upload_start; // 0x10
		::System::IntPtr log_upload_progress; // 0x18
		::System::IntPtr log_uploaded; // 0x20
		::System::IntPtr attachment_upload_start; // 0x28
		::System::IntPtr attachment_upload_progress; // 0x30
		::System::IntPtr attachment_uploaded; // 0x38
		::System::IntPtr attachment_file_mapping; // 0x40
		::System::IntPtr opaque; // 0x48
	};
}
