#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

inline static constexpr unsigned int IRI_HlodData_StageMatLutKeyValuePair_TypeDefinitionIndex = 45387;

struct alignas(8) IRI_HlodData_StageMatLutKeyValuePair
{
	::System::String* stageRootName; // 0x10
	::System::String* matLutPath; // 0x18
};
