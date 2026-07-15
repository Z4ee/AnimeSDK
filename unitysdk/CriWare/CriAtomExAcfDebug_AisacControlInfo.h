#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcfDebug_AisacControlInfo_TypeDefinitionIndex = 38024;

	struct alignas(8) CriAtomExAcfDebug_AisacControlInfo
	{
		::System::String* name; // 0x10
		::System::UInt32 id; // 0x18
	};
}
