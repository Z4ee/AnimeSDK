#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int APMC_LOGBACK_LogInfo_TypeDefinitionIndex = 44779;

	struct alignas(8) APMC_LOGBACK_LogInfo
	{
		::System::Int32 level; // 0x10
		::System::Int32 line; // 0x14
		::System::String* module_info; // 0x18
		::System::String* tag; // 0x20
		::System::String* file_name; // 0x28
		::System::String* func_name; // 0x30
		::System::String* log_info; // 0x38
	};
}
