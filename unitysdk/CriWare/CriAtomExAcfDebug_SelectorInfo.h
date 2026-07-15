#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcfDebug_SelectorInfo_TypeDefinitionIndex = 38027;

	struct alignas(8) CriAtomExAcfDebug_SelectorInfo
	{
		::System::String* name; // 0x10
		::System::UInt16 index; // 0x18
		::System::UInt16 numLabels; // 0x1A
		::System::UInt16 globalLabelIndex; // 0x1C
	};
}
