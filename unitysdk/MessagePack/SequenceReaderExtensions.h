#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/SequenceReader_1.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_1_OFFSET UNITYSDK_OFFSET(0x1D536460)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_2_OFFSET UNITYSDK_OFFSET(0x1D5364C0)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_3_OFFSET UNITYSDK_OFFSET(0x1D536520)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_4_OFFSET UNITYSDK_OFFSET(0x1D536580)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_5_OFFSET UNITYSDK_OFFSET(0x1D5365F0)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_6_OFFSET UNITYSDK_OFFSET(0x1D536650)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_7_OFFSET UNITYSDK_OFFSET(0x1D5366B0)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x1D536400)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADREVERSEENDIANNESS_1_OFFSET UNITYSDK_OFFSET(0x1D536500)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADREVERSEENDIANNESS_2_OFFSET UNITYSDK_OFFSET(0x1D5365C0)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREADREVERSEENDIANNESS_OFFSET UNITYSDK_OFFSET(0x1D536440)
#define MESSAGEPACK_SEQUENCEREADEREXTENSIONS_TRYREAD_OFFSET UNITYSDK_OFFSET(0x1D5363D0)

namespace MessagePack
{
	inline static constexpr unsigned int SequenceReaderExtensions_TypeDefinitionIndex = 29781;

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
