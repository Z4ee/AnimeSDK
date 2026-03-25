#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"

#define SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_READINT32LITTLEENDIAN_OFFSET UNITYSDK_OFFSET(0x18517440)
#define SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_READUINT64LITTLEENDIAN_OFFSET UNITYSDK_OFFSET(0x18517540)
#define SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_1_OFFSET UNITYSDK_OFFSET(0x185173F0)
#define SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_2_OFFSET UNITYSDK_OFFSET(0x18517400)
#define SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_3_OFFSET UNITYSDK_OFFSET(0x18517410)
#define SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_4_OFFSET UNITYSDK_OFFSET(0x18517420)
#define SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_5_OFFSET UNITYSDK_OFFSET(0x18517430)
#define SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_OFFSET UNITYSDK_OFFSET(0x185173E0)

namespace System::Buffers::Binary
{
	inline static constexpr unsigned int BinaryPrimitives_TypeDefinitionIndex = 5002;

	class BinaryPrimitives : public ::System::Object
	{
	public:
		static ::System::Int16 ReverseEndianness(::System::Int16 value)
		{
			return ((::System::Int16(*)(::System::Int16))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_OFFSET))(value);
		}

		static ::System::Int32 ReverseEndianness_1(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_1_OFFSET))(value);
		}

		static ::System::Int64 ReverseEndianness_2(::System::Int64 value)
		{
			return ((::System::Int64(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_2_OFFSET))(value);
		}

		static ::System::UInt16 ReverseEndianness_3(::System::UInt16 value)
		{
			return ((::System::UInt16(*)(::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_3_OFFSET))(value);
		}

		static ::System::UInt32 ReverseEndianness_4(::System::UInt32 value)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_4_OFFSET))(value);
		}

		static ::System::UInt64 ReverseEndianness_5(::System::UInt64 value)
		{
			return ((::System::UInt64(*)(::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_REVERSEENDIANNESS_5_OFFSET))(value);
		}

		static ::System::Int32 ReadInt32LittleEndian(::System::ReadOnlySpan_1<::System::Byte> source)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_READINT32LITTLEENDIAN_OFFSET))(source);
		}

		static ::System::UInt64 ReadUInt64LittleEndian(::System::ReadOnlySpan_1<::System::Byte> source)
		{
			return ((::System::UInt64(*)(::System::ReadOnlySpan_1<::System::Byte>))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_BINARY_BINARYPRIMITIVES_READUINT64LITTLEENDIAN_OFFSET))(source);
		}
	};
}
