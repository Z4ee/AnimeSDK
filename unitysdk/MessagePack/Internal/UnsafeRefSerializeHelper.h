#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1735F760)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x1735F960)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x1735FBD0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_4_OFFSET UNITYSDK_OFFSET(0x1735FE00)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_5_OFFSET UNITYSDK_OFFSET(0x17360080)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_6_OFFSET UNITYSDK_OFFSET(0x173602C0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_7_OFFSET UNITYSDK_OFFSET(0x173604C0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_8_OFFSET UNITYSDK_OFFSET(0x17360810)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1735F520)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1735F580)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x1735F7C0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x1735F9C0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_4_OFFSET UNITYSDK_OFFSET(0x1735FC30)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_5_OFFSET UNITYSDK_OFFSET(0x1735FE60)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_6_OFFSET UNITYSDK_OFFSET(0x173600E0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_7_OFFSET UNITYSDK_OFFSET(0x17360320)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_8_OFFSET UNITYSDK_OFFSET(0x17360660)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1735F310)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_1_OFFSET UNITYSDK_OFFSET(0x173609D0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_2_OFFSET UNITYSDK_OFFSET(0x173609F0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_3_OFFSET UNITYSDK_OFFSET(0x17360A30)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_4_OFFSET UNITYSDK_OFFSET(0x17360AA0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_5_OFFSET UNITYSDK_OFFSET(0x17360AF0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_6_OFFSET UNITYSDK_OFFSET(0x17360B90)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_7_OFFSET UNITYSDK_OFFSET(0x17360C00)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_OFFSET UNITYSDK_OFFSET(0x173609B0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_10_OFFSET UNITYSDK_OFFSET(0x1732C450)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x17339750)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x17330790)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x1732A8D0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_4_OFFSET UNITYSDK_OFFSET(0x1733A360)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_5_OFFSET UNITYSDK_OFFSET(0x17330CA0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_6_OFFSET UNITYSDK_OFFSET(0x1733A870)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_7_OFFSET UNITYSDK_OFFSET(0x173311B0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_8_OFFSET UNITYSDK_OFFSET(0x1733AD80)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_9_OFFSET UNITYSDK_OFFSET(0x17339C20)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x173291E0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int UnsafeRefSerializeHelper_TypeDefinitionIndex = 9358;

	class UnsafeRefSerializeHelper : public ::System::Object
	{
	public:
		static ::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Boolean& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Boolean&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_OFFSET))(writer, input, length);
		}

		static ::System::Void Serialize_1(::MessagePack::MessagePackWriter& writer, ::System::SByte& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::SByte&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_1_OFFSET))(writer, input, length);
		}

		static ::System::Void BigEndianSerialize(::MessagePack::MessagePackWriter& writer, ::System::SByte& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::SByte&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_OFFSET))(writer, input, length);
		}

		static ::System::Void LittleEndianSerialize(::MessagePack::MessagePackWriter& writer, ::System::SByte& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::SByte&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_OFFSET))(writer, input, length);
		}

		static ::System::Void Serialize_2(::MessagePack::MessagePackWriter& writer, ::System::Int16& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int16&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_2_OFFSET))(writer, input, length);
		}

		static ::System::Void BigEndianSerialize_1(::MessagePack::MessagePackWriter& writer, ::System::Int16& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int16&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_1_OFFSET))(writer, input, length);
		}

		static ::System::Void LittleEndianSerialize_1(::MessagePack::MessagePackWriter& writer, ::System::Int16& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int16&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_1_OFFSET))(writer, input, length);
		}

		static ::System::Void Serialize_3(::MessagePack::MessagePackWriter& writer, ::System::Char& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Char&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_3_OFFSET))(writer, input, length);
		}

		static ::System::Void Serialize_4(::MessagePack::MessagePackWriter& writer, ::System::UInt16& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt16&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_4_OFFSET))(writer, input, length);
		}

		static ::System::Void BigEndianSerialize_2(::MessagePack::MessagePackWriter& writer, ::System::UInt16& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt16&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_2_OFFSET))(writer, input, length);
		}

		static ::System::Void LittleEndianSerialize_2(::MessagePack::MessagePackWriter& writer, ::System::UInt16& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt16&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_2_OFFSET))(writer, input, length);
		}

		static ::System::Void Serialize_5(::MessagePack::MessagePackWriter& writer, ::System::Int32& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_5_OFFSET))(writer, input, length);
		}

		static ::System::Void BigEndianSerialize_3(::MessagePack::MessagePackWriter& writer, ::System::Int32& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_3_OFFSET))(writer, input, length);
		}

		static ::System::Void LittleEndianSerialize_3(::MessagePack::MessagePackWriter& writer, ::System::Int32& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_3_OFFSET))(writer, input, length);
		}

		static ::System::Void Serialize_6(::MessagePack::MessagePackWriter& writer, ::System::UInt32& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt32&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_6_OFFSET))(writer, input, length);
		}

		static ::System::Void BigEndianSerialize_4(::MessagePack::MessagePackWriter& writer, ::System::UInt32& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt32&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_4_OFFSET))(writer, input, length);
		}

		static ::System::Void LittleEndianSerialize_4(::MessagePack::MessagePackWriter& writer, ::System::UInt32& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt32&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_4_OFFSET))(writer, input, length);
		}

		static ::System::Void Serialize_7(::MessagePack::MessagePackWriter& writer, ::System::Int64& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int64&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_7_OFFSET))(writer, input, length);
		}

		static ::System::Void BigEndianSerialize_5(::MessagePack::MessagePackWriter& writer, ::System::Int64& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int64&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_5_OFFSET))(writer, input, length);
		}

		static ::System::Void LittleEndianSerialize_5(::MessagePack::MessagePackWriter& writer, ::System::Int64& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Int64&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_5_OFFSET))(writer, input, length);
		}

		static ::System::Void Serialize_8(::MessagePack::MessagePackWriter& writer, ::System::UInt64& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt64&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_8_OFFSET))(writer, input, length);
		}

		static ::System::Void BigEndianSerialize_6(::MessagePack::MessagePackWriter& writer, ::System::UInt64& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt64&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_6_OFFSET))(writer, input, length);
		}

		static ::System::Void LittleEndianSerialize_6(::MessagePack::MessagePackWriter& writer, ::System::UInt64& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::UInt64&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_6_OFFSET))(writer, input, length);
		}

		static ::System::Void Serialize_9(::MessagePack::MessagePackWriter& writer, ::System::Single& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Single&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_9_OFFSET))(writer, input, length);
		}

		static ::System::Void BigEndianSerialize_7(::MessagePack::MessagePackWriter& writer, ::System::Single& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Single&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_7_OFFSET))(writer, input, length);
		}

		static ::System::Void LittleEndianSerialize_7(::MessagePack::MessagePackWriter& writer, ::System::Single& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Single&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_7_OFFSET))(writer, input, length);
		}

		static ::System::Void Serialize_10(::MessagePack::MessagePackWriter& writer, ::System::Double& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Double&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_10_OFFSET))(writer, input, length);
		}

		static ::System::Void BigEndianSerialize_8(::MessagePack::MessagePackWriter& writer, ::System::Double& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Double&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_8_OFFSET))(writer, input, length);
		}

		static ::System::Void LittleEndianSerialize_8(::MessagePack::MessagePackWriter& writer, ::System::Double& input, ::System::Int32 length)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackWriter&, ::System::Double&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_8_OFFSET))(writer, input, length);
		}

		static ::System::UIntPtr ReverseWriteUnknown(::System::Byte& destination, ::System::Byte value)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::Byte))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_OFFSET))(destination, value);
		}

		static ::System::UIntPtr ReverseWriteUnknown_1(::System::Byte& destination, ::System::SByte value)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::SByte))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_1_OFFSET))(destination, value);
		}

		static ::System::UIntPtr ReverseWriteUnknown_2(::System::Byte& destination, ::System::UInt16 value)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::UInt16))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_2_OFFSET))(destination, value);
		}

		static ::System::UIntPtr ReverseWriteUnknown_3(::System::Byte& destination, ::System::Int16 value)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::Int16))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_3_OFFSET))(destination, value);
		}

		static ::System::UIntPtr ReverseWriteUnknown_4(::System::Byte& destination, ::System::UInt32 value)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_4_OFFSET))(destination, value);
		}

		static ::System::UIntPtr ReverseWriteUnknown_5(::System::Byte& destination, ::System::Int32 value)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_5_OFFSET))(destination, value);
		}

		static ::System::UIntPtr ReverseWriteUnknown_6(::System::Byte& destination, ::System::UInt64 value)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::UInt64))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_6_OFFSET))(destination, value);
		}

		static ::System::UIntPtr ReverseWriteUnknown_7(::System::Byte& destination, ::System::Int64 value)
		{
			return ((::System::UIntPtr(*)(::System::Byte&, ::System::Int64))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_7_OFFSET))(destination, value);
		}
	};
}
