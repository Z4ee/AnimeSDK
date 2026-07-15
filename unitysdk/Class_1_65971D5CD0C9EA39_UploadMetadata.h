#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

inline static constexpr unsigned int Class_1_65971D5CD0C9EA39_UploadMetadata_TypeDefinitionIndex = 45622;

struct alignas(8) Class_1_65971D5CD0C9EA39_UploadMetadata
{
	::System::UInt32 version; // 0x10
	::System::String* platform; // 0x18
	::System::String* resourceBranch; // 0x20
	::System::String* api; // 0x28
};
