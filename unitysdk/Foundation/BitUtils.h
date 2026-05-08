#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_BITUTILS_BYTESWAP64_OFFSET UNITYSDK_OFFSET(0x1BFE1A60)
#define FOUNDATION_BITUTILS_COUNTLEADINGZEROS32_OFFSET UNITYSDK_OFFSET(0x1BFE1B50)
#define FOUNDATION_BITUTILS_COUNTTRAILINGZEROS32_OFFSET UNITYSDK_OFFSET(0x1BFE1BC0)
#define FOUNDATION_BITUTILS_GETLOWERBITMASK32_OFFSET UNITYSDK_OFFSET(0x1BFE1A70)
#define FOUNDATION_BITUTILS_GETPOPULATIONCOUNT32_OFFSET UNITYSDK_OFFSET(0x1BFE1B10)
#define FOUNDATION_BITUTILS_GETPOPULATIONCOUNT64_OFFSET UNITYSDK_OFFSET(0x1BFE1AB0)
#define FOUNDATION_BITUTILS_GETUPPERBITMASK32_OFFSET UNITYSDK_OFFSET(0x1BFE1A90)
#define FOUNDATION_BITUTILS_NORMALIZE32_OFFSET UNITYSDK_OFFSET(0x1BFE1C10)

namespace Foundation
{
	inline static constexpr unsigned int BitUtils_TypeDefinitionIndex = 8832;

	class BitUtils : public ::System::Object
	{
	public:
		static ::System::UInt64 ByteSwap64(::System::UInt64 value)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_BITUTILS_BYTESWAP64_OFFSET))(value);
		}

		static ::System::UInt32 GetLowerBitMask32(::System::Int32 count)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_BITUTILS_GETLOWERBITMASK32_OFFSET))(count);
		}

		static ::System::UInt32 GetUpperBitMask32(::System::Int32 count)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_BITUTILS_GETUPPERBITMASK32_OFFSET))(count);
		}

		static ::System::UInt32 GetPopulationCount64(::System::UInt64 value)
		{
			return ((::System::UInt32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_BITUTILS_GETPOPULATIONCOUNT64_OFFSET))(value);
		}

		static ::System::UInt32 GetPopulationCount32(::System::UInt32 value)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_BITUTILS_GETPOPULATIONCOUNT32_OFFSET))(value);
		}

		static ::System::UInt32 CountLeadingZeros32(::System::UInt32 value)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_BITUTILS_COUNTLEADINGZEROS32_OFFSET))(value);
		}

		static ::System::UInt32 CountTrailingZeros32(::System::UInt32 value)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_BITUTILS_COUNTTRAILINGZEROS32_OFFSET))(value);
		}

		static ::System::Void Normalize32(::System::UInt32*& ptr, ::System::Int64& index)
		{
			return ((::System::Void(*)(::System::UInt32*&, ::System::Int64&))((::PBYTE)hIl2Cpp + FOUNDATION_BITUTILS_NORMALIZE32_OFFSET))(ptr, index);
		}
	};
}
