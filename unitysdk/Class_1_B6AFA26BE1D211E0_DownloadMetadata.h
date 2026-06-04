#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

inline static constexpr unsigned int Class_1_B6AFA26BE1D211E0_DownloadMetadata_TypeDefinitionIndex = 44706;

struct alignas(8) Class_1_B6AFA26BE1D211E0_DownloadMetadata
{
	::System::UInt32 version; // 0x10
	::System::String* platform; // 0x18
	::Il2CppArray<::System::String*>* resourceBranch; // 0x20
	::System::String* api; // 0x28
	::System::Int32 minimalReportCount; // 0x30
};
