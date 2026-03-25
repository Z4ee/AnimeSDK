#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x15D61ED0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x15D620D0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x15D62340)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_4_OFFSET UNITYSDK_OFFSET(0x15D62570)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_5_OFFSET UNITYSDK_OFFSET(0x15D627F0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_6_OFFSET UNITYSDK_OFFSET(0x15D62A30)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_7_OFFSET UNITYSDK_OFFSET(0x15D62C30)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_8_OFFSET UNITYSDK_OFFSET(0x15D62F80)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_BIGENDIANSERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D61C90)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x15D61CF0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x15D61F30)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x15D62130)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_4_OFFSET UNITYSDK_OFFSET(0x15D623A0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_5_OFFSET UNITYSDK_OFFSET(0x15D625D0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_6_OFFSET UNITYSDK_OFFSET(0x15D62850)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_7_OFFSET UNITYSDK_OFFSET(0x15D62A90)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_8_OFFSET UNITYSDK_OFFSET(0x15D62DD0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_LITTLEENDIANSERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D61A80)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_1_OFFSET UNITYSDK_OFFSET(0x15D63140)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_2_OFFSET UNITYSDK_OFFSET(0x15D63160)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_3_OFFSET UNITYSDK_OFFSET(0x15D631A0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_4_OFFSET UNITYSDK_OFFSET(0x15D63210)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_5_OFFSET UNITYSDK_OFFSET(0x15D63260)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_6_OFFSET UNITYSDK_OFFSET(0x15D63300)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_7_OFFSET UNITYSDK_OFFSET(0x15D63370)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_REVERSEWRITEUNKNOWN_OFFSET UNITYSDK_OFFSET(0x15D63120)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_10_OFFSET UNITYSDK_OFFSET(0x15D2EA60)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x15D3BD50)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x15D32DA0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x15D2CEE0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_4_OFFSET UNITYSDK_OFFSET(0x15D3C960)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_5_OFFSET UNITYSDK_OFFSET(0x15D332B0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_6_OFFSET UNITYSDK_OFFSET(0x15D3CE70)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_7_OFFSET UNITYSDK_OFFSET(0x15D337C0)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_8_OFFSET UNITYSDK_OFFSET(0x15D3D380)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_9_OFFSET UNITYSDK_OFFSET(0x15D3C220)
#define MESSAGEPACK_INTERNAL_UNSAFEREFSERIALIZEHELPER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15D2B7F0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int UnsafeRefSerializeHelper_TypeDefinitionIndex = 9161;

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
