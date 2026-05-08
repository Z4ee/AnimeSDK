#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/BitWidth.h"
#include "unitysdk/System/Object.h"

#define FLEXBUFFERS_BITWIDTHUTIL_PADDINGSIZE_OFFSET UNITYSDK_OFFSET(0x1B20B3B0)
#define FLEXBUFFERS_BITWIDTHUTIL_WIDTH_1_OFFSET UNITYSDK_OFFSET(0x1B20B270)
#define FLEXBUFFERS_BITWIDTHUTIL_WIDTH_2_OFFSET UNITYSDK_OFFSET(0x1B20B290)
#define FLEXBUFFERS_BITWIDTHUTIL_WIDTH_3_OFFSET UNITYSDK_OFFSET(0x1B20B2C0)
#define FLEXBUFFERS_BITWIDTHUTIL_WIDTH_4_OFFSET UNITYSDK_OFFSET(0x1B20B310)
#define FLEXBUFFERS_BITWIDTHUTIL_WIDTH_5_OFFSET UNITYSDK_OFFSET(0x1B20B320)
#define FLEXBUFFERS_BITWIDTHUTIL_WIDTH_6_OFFSET UNITYSDK_OFFSET(0x1B20B330)
#define FLEXBUFFERS_BITWIDTHUTIL_WIDTH_7_OFFSET UNITYSDK_OFFSET(0x1B20B350)
#define FLEXBUFFERS_BITWIDTHUTIL_WIDTH_8_OFFSET UNITYSDK_OFFSET(0x1B20B380)
#define FLEXBUFFERS_BITWIDTHUTIL_WIDTH_9_OFFSET UNITYSDK_OFFSET(0x1B20B390)
#define FLEXBUFFERS_BITWIDTHUTIL_WIDTH_OFFSET UNITYSDK_OFFSET(0x1B20B260)

namespace FlexBuffers
{
	inline static constexpr unsigned int BitWidthUtil_TypeDefinitionIndex = 8751;

	class BitWidthUtil : public ::System::Object
	{
	public:
		static ::FlexBuffers::BitWidth Width(::System::SByte value)
		{
			return ((::FlexBuffers::BitWidth(*)(::System::SByte))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BITWIDTHUTIL_WIDTH_OFFSET))(value);
		}

		static ::FlexBuffers::BitWidth Width_1(::System::Int16 value)
		{
			return ((::FlexBuffers::BitWidth(*)(::System::Int16))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BITWIDTHUTIL_WIDTH_1_OFFSET))(value);
		}

		static ::FlexBuffers::BitWidth Width_2(::System::Int32 value)
		{
			return ((::FlexBuffers::BitWidth(*)(::System::Int32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BITWIDTHUTIL_WIDTH_2_OFFSET))(value);
		}

		static ::FlexBuffers::BitWidth Width_3(::System::Int64 value)
		{
			return ((::FlexBuffers::BitWidth(*)(::System::Int64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BITWIDTHUTIL_WIDTH_3_OFFSET))(value);
		}

		static ::FlexBuffers::BitWidth Width_4(::System::Byte value)
		{
			return ((::FlexBuffers::BitWidth(*)(::System::Byte))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BITWIDTHUTIL_WIDTH_4_OFFSET))(value);
		}

		static ::FlexBuffers::BitWidth Width_5(::System::UInt16 value)
		{
			return ((::FlexBuffers::BitWidth(*)(::System::UInt16))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BITWIDTHUTIL_WIDTH_5_OFFSET))(value);
		}

		static ::FlexBuffers::BitWidth Width_6(::System::UInt32 value)
		{
			return ((::FlexBuffers::BitWidth(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BITWIDTHUTIL_WIDTH_6_OFFSET))(value);
		}

		static ::FlexBuffers::BitWidth Width_7(::System::UInt64 value)
		{
			return ((::FlexBuffers::BitWidth(*)(::System::UInt64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BITWIDTHUTIL_WIDTH_7_OFFSET))(value);
		}

		static ::FlexBuffers::BitWidth Width_8(::System::Single value)
		{
			return ((::FlexBuffers::BitWidth(*)(::System::Single))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BITWIDTHUTIL_WIDTH_8_OFFSET))(value);
		}

		static ::FlexBuffers::BitWidth Width_9(::System::Double value)
		{
			return ((::FlexBuffers::BitWidth(*)(::System::Double))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BITWIDTHUTIL_WIDTH_9_OFFSET))(value);
		}

		static ::System::UInt64 PaddingSize(::System::UInt64 bufSize, ::System::UInt64 scalarSize)
		{
			return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + FLEXBUFFERS_BITWIDTHUTIL_PADDINGSIZE_OFFSET))(bufSize, scalarSize);
		}
	};
}
