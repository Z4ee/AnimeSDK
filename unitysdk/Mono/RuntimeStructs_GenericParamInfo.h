#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/RuntimeStructs_MonoClass.h"
#include "unitysdk/System/ValueType.h"

namespace Mono
{
	inline static constexpr unsigned int RuntimeStructs_GenericParamInfo_TypeDefinitionIndex = 15;

	struct alignas(8) RuntimeStructs_GenericParamInfo
	{
		::Mono::RuntimeStructs_MonoClass* pklass; // 0x10
		::System::IntPtr name; // 0x18
		::System::UInt16 flags; // 0x20
		::System::UInt32 token; // 0x24
		::Mono::RuntimeStructs_MonoClass** constraints; // 0x28
	};
}
