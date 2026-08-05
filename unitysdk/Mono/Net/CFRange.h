#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MONO_NET_CFRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x9D4DA0)

namespace Mono::Net
{
	inline static constexpr unsigned int CFRange_TypeDefinitionIndex = 2587;

	struct alignas(8) CFRange
	{
		::System::IntPtr Location; // 0x10
		::System::IntPtr Length; // 0x18

		::System::Void _ctor(::System::Int32 loc, ::System::Int32 len)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_NET_CFRANGE__CTOR_OFFSET))(this, loc, len);
		}
	};
}
