#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

inline static constexpr unsigned int Class_1_01FD457D69060FE8_DownloadMetadata_TypeDefinitionIndex = 38276;

struct alignas(8) Class_1_01FD457D69060FE8_DownloadMetadata
{
	::System::UInt32 version; // 0x10
	::System::String* platform; // 0x18
	::Il2CppArray<::System::String*>* resourceBranch; // 0x20
	::System::String* api; // 0x28
	::System::Int32 minimalReportCount; // 0x30
};
