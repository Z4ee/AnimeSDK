#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcfDebug_CategoryInfo_TypeDefinitionIndex = 38022;

	struct alignas(8) CriAtomExAcfDebug_CategoryInfo
	{
		::System::UInt32 groupNo; // 0x10
		::System::UInt32 id; // 0x14
		::System::String* name; // 0x18
		::System::UInt32 numCueLimits; // 0x20
		::System::Single volume; // 0x24
	};
}
