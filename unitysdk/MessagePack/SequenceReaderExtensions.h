#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/SequenceReader_1.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_1_OFFSET UNITYSDK_OFFSET(0x1E22DFB0)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_2_OFFSET UNITYSDK_OFFSET(0x1E22E010)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_3_OFFSET UNITYSDK_OFFSET(0x1E22E070)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_4_OFFSET UNITYSDK_OFFSET(0x1E22E0D0)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_5_OFFSET UNITYSDK_OFFSET(0x1E22E140)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_6_OFFSET UNITYSDK_OFFSET(0x1E22E1A0)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_7_OFFSET UNITYSDK_OFFSET(0x1E22E200)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x1E22DF50)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADREVERSEENDIANNESS_1_OFFSET UNITYSDK_OFFSET(0x1E22E050)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADREVERSEENDIANNESS_2_OFFSET UNITYSDK_OFFSET(0x1E22E110)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADREVERSEENDIANNESS_OFFSET UNITYSDK_OFFSET(0x1E22DF90)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREAD_OFFSET UNITYSDK_OFFSET(0x1E22DF20)

namespace MessagePack
{
	inline static constexpr unsigned int SequenceReaderExtensions_TypeDefinitionIndex = 30853;

	class SequenceReaderExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean TryRead(::MessagePack::SequenceReader_1<::System::Byte>& reader, ::System::SByte& value)
		{
			return ((::System::Boolean(*)(::MessagePack::SequenceReader_1<::System::Byte>&, ::System::SByte&))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREAD_OFFSET))(reader, value);
		}

		static ::System::Boolean TryReadBigEndian(::MessagePack::SequenceReader_1<::System::Byte>& reader, ::System::Int16& value)
		{
			return ((::System::Boolean(*)(::MessagePack::SequenceReader_1<::System::Byte>&, ::System::Int16&))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_OFFSET))(reader, value);
		}

		static ::System::Boolean TryReadBigEndian_1(::MessagePack::SequenceReader_1<::System::Byte>& reader, ::System::UInt16& value)
		{
			return ((::System::Boolean(*)(::MessagePack::SequenceReader_1<::System::Byte>&, ::System::UInt16&))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_1_OFFSET))(reader, value);
		}

		static ::System::Boolean TryReadReverseEndianness(::MessagePack::SequenceReader_1<::System::Byte>& reader, ::System::Int16& value)
		{
			return ((::System::Boolean(*)(::MessagePack::SequenceReader_1<::System::Byte>&, ::System::Int16&))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADREVERSEENDIANNESS_OFFSET))(reader, value);
		}

		static ::System::Boolean TryReadBigEndian_2(::MessagePack::SequenceReader_1<::System::Byte>& reader, ::System::Int32& value)
		{
			return ((::System::Boolean(*)(::MessagePack::SequenceReader_1<::System::Byte>&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_2_OFFSET))(reader, value);
		}

		static ::System::Boolean TryReadBigEndian_3(::MessagePack::SequenceReader_1<::System::Byte>& reader, ::System::UInt32& value)
		{
			return ((::System::Boolean(*)(::MessagePack::SequenceReader_1<::System::Byte>&, ::System::UInt32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_3_OFFSET))(reader, value);
		}

		static ::System::Boolean TryReadReverseEndianness_1(::MessagePack::SequenceReader_1<::System::Byte>& reader, ::System::Int32& value)
		{
			return ((::System::Boolean(*)(::MessagePack::SequenceReader_1<::System::Byte>&, ::System::Int32&))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADREVERSEENDIANNESS_1_OFFSET))(reader, value);
		}

		static ::System::Boolean TryReadBigEndian_4(::MessagePack::SequenceReader_1<::System::Byte>& reader, ::System::Int64& value)
		{
			return ((::System::Boolean(*)(::MessagePack::SequenceReader_1<::System::Byte>&, ::System::Int64&))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_4_OFFSET))(reader, value);
		}

		static ::System::Boolean TryReadBigEndian_5(::MessagePack::SequenceReader_1<::System::Byte>& reader, ::System::UInt64& value)
		{
			return ((::System::Boolean(*)(::MessagePack::SequenceReader_1<::System::Byte>&, ::System::UInt64&))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_5_OFFSET))(reader, value);
		}

		static ::System::Boolean TryReadReverseEndianness_2(::MessagePack::SequenceReader_1<::System::Byte>& reader, ::System::Int64& value)
		{
			return ((::System::Boolean(*)(::MessagePack::SequenceReader_1<::System::Byte>&, ::System::Int64&))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADREVERSEENDIANNESS_2_OFFSET))(reader, value);
		}

		static ::System::Boolean TryReadBigEndian_6(::MessagePack::SequenceReader_1<::System::Byte>& reader, ::System::Single& value)
		{
			return ((::System::Boolean(*)(::MessagePack::SequenceReader_1<::System::Byte>&, ::System::Single&))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_6_OFFSET))(reader, value);
		}

		static ::System::Boolean TryReadBigEndian_7(::MessagePack::SequenceReader_1<::System::Byte>& reader, ::System::Double& value)
		{
			return ((::System::Boolean(*)(::MessagePack::SequenceReader_1<::System::Byte>&, ::System::Double&))((::PBYTE)hIl2Cpp + MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_7_OFFSET))(reader, value);
		}
	};
}
