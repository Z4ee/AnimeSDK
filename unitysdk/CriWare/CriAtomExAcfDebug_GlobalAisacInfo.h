#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAcfDebug_AisacType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcfDebug_GlobalAisacInfo_TypeDefinitionIndex = 38026;

	struct alignas(8) CriAtomExAcfDebug_GlobalAisacInfo
	{
		::System::String* name; // 0x10
		::System::UInt16 index; // 0x18
		::System::UInt16 numGraphs; // 0x1A
		::CriWare::CriAtomExAcfDebug_AisacType type; // 0x1C
		::System::Single randomRange; // 0x20
		::System::UInt16 controlId; // 0x24
	};
}
