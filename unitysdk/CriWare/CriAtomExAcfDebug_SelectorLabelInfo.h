#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcfDebug_SelectorLabelInfo_TypeDefinitionIndex = 38028;

	struct alignas(8) CriAtomExAcfDebug_SelectorLabelInfo
	{
		::System::String* selectorName; // 0x10
		::System::String* labelName; // 0x18
	};
}
