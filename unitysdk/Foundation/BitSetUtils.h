#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_BITSETUTILS_FETCH4BIT_OFFSET UNITYSDK_OFFSET(0x1BFF52C0)

namespace Foundation
{
	inline static constexpr unsigned int BitSetUtils_TypeDefinitionIndex = 9210;

	class BitSetUtils : public ::System::Object
	{
	public:
		static ::System::Byte Fetch4Bit(::System::UInt64 value, ::System::Int32 index)
		{
			return ((::System::Byte(*)(::System::UInt64, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_BITSETUTILS_FETCH4BIT_OFFSET))(value, index);
		}
	};
}
