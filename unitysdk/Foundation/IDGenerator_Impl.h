#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_IDGENERATOR_IMPL_GENERATE_OFFSET UNITYSDK_OFFSET(0xA5FC10)
#define FOUNDATION_IDGENERATOR_IMPL__CTOR_OFFSET UNITYSDK_OFFSET(0xA29A90)

namespace Foundation
{
	inline static constexpr unsigned int IDGenerator_Impl_TypeDefinitionIndex = 8470;

	struct alignas(8) IDGenerator_Impl
	{
		::System::UInt64 _lowerBitsGenerator; // 0x10
		::System::UInt64 _highBits; // 0x18

		::System::Void _ctor(::System::UInt64 highBits)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_IDGENERATOR_IMPL__CTOR_OFFSET))(this, highBits);
		}

		::System::UInt64 Generate()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_IDGENERATOR_IMPL_GENERATE_OFFSET))(this);
		}
	};
}
