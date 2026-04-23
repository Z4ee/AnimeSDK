#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/WireFormat_WireType.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class IMessage; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }

#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_CHECKNOSPACELEFT_OFFSET UNITYSDK_OFFSET(0x170D9080)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEBYTESSIZE_OFFSET UNITYSDK_OFFSET(0x170D79E0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEENUMSIZE_OFFSET UNITYSDK_OFFSET(0x170D7AE0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEFIXED32SIZE_OFFSET UNITYSDK_OFFSET(0x170D7780)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEFIXED64SIZE_OFFSET UNITYSDK_OFFSET(0x170D7770)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEINT32SIZE_OFFSET UNITYSDK_OFFSET(0x170D76B0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEINT64SIZE_OFFSET UNITYSDK_OFFSET(0x170D75F0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTELENGTHSIZE_OFFSET UNITYSDK_OFFSET(0x170D7850)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEMESSAGESIZE_OFFSET UNITYSDK_OFFSET(0x170D78C0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTERAWVARINT32SIZE_OFFSET UNITYSDK_OFFSET(0x170D7730)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTERAWVARINT64SIZE_OFFSET UNITYSDK_OFFSET(0x170D7570)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTESINT32SIZE_OFFSET UNITYSDK_OFFSET(0x170D7B70)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTESTRINGSIZE_OFFSET UNITYSDK_OFFSET(0x170D7790)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTETAGSIZE_OFFSET UNITYSDK_OFFSET(0x170D7BF0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEUINT32SIZE_OFFSET UNITYSDK_OFFSET(0x170D7A70)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEUINT64SIZE_OFFSET UNITYSDK_OFFSET(0x170D74B0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x170D8FB0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_ENCODEZIGZAG32_OFFSET UNITYSDK_OFFSET(0x170D7BE0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x170D9040)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_GET_SPACELEFT_OFFSET UNITYSDK_OFFSET(0x170D9100)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_REFRESHBUFFER_OFFSET UNITYSDK_OFFSET(0x170D8EA0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEBOOL_OFFSET UNITYSDK_OFFSET(0x170D88D0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEBYTES_OFFSET UNITYSDK_OFFSET(0x170D8D50)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEDOUBLE_OFFSET UNITYSDK_OFFSET(0x170D80A0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEENUM_OFFSET UNITYSDK_OFFSET(0x170D8DB0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEFIXED32_OFFSET UNITYSDK_OFFSET(0x170D87A0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEFIXED64_OFFSET UNITYSDK_OFFSET(0x170D8790)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEFLOAT_OFFSET UNITYSDK_OFFSET(0x170D8330)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEINT32_OFFSET UNITYSDK_OFFSET(0x170D8630)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEINT64_OFFSET UNITYSDK_OFFSET(0x170D8620)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITELENGTH_OFFSET UNITYSDK_OFFSET(0x170D8BD0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEMESSAGE_OFFSET UNITYSDK_OFFSET(0x170D8C00)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTES_1_OFFSET UNITYSDK_OFFSET(0x170D4A00)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTES_OFFSET UNITYSDK_OFFSET(0x170D8BE0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTE_OFFSET UNITYSDK_OFFSET(0x170D88E0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWLITTLEENDIAN32_OFFSET UNITYSDK_OFFSET(0x170D87B0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWLITTLEENDIAN64_OFFSET UNITYSDK_OFFSET(0x170D80B0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_1_OFFSET UNITYSDK_OFFSET(0x170D8E40)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_2_OFFSET UNITYSDK_OFFSET(0x170D8E70)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_OFFSET UNITYSDK_OFFSET(0x170D8E30)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWVARINT32_OFFSET UNITYSDK_OFFSET(0x170D8650)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWVARINT64_OFFSET UNITYSDK_OFFSET(0x170D8510)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITESINT32_OFFSET UNITYSDK_OFFSET(0x170D8DD0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x170D8980)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITETAG_1_OFFSET UNITYSDK_OFFSET(0x170D8E20)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITETAG_OFFSET UNITYSDK_OFFSET(0x170D8E10)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEUINT32_OFFSET UNITYSDK_OFFSET(0x170D8DA0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEUINT64_OFFSET UNITYSDK_OFFSET(0x170D8500)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x170D9150)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x170D7CB0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x170D7CE0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_3_OFFSET UNITYSDK_OFFSET(0x170D7D90)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_4_OFFSET UNITYSDK_OFFSET(0x170D7F90)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_5_OFFSET UNITYSDK_OFFSET(0x170D7EA0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x170D7C60)

namespace Google::Protobuf
{
	inline static constexpr unsigned int CodedOutputStream_TypeDefinitionIndex = 6166;

	class CodedOutputStream : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_Utf8Encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(CodedOutputStream_TypeDefinitionIndex)->GetStaticField(0x1690);
		}
		static ::System::Int32* StaticGet_DefaultBufferSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CodedOutputStream_TypeDefinitionIndex)->GetStaticField(0x10A0);
		}
		::Il2CppArray<::System::Byte>* buffer; // 0x10
		::System::IO::Stream* output; // 0x18
		::System::Int32 limit; // 0x20
		::System::Int32 position; // 0x24
		::System::Boolean leaveOpen; // 0x28
		::System::Boolean autoRelease; // 0x29

		::System::Void _ctor(::Il2CppArray<::System::Byte>* flatArray, ::System::Int32 length, ::System::Boolean autoRelease)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_OFFSET))(this, flatArray, length, autoRelease);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 length, ::System::Boolean autoRelease)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_1_OFFSET))(this, buffer, offset, length, autoRelease);
		}

		::System::Void _ctor_2(::System::IO::Stream* output, ::Il2CppArray<::System::Byte>* buffer, ::System::Boolean leaveOpen, ::System::Int32 length, ::System::Boolean autoRelease)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_2_OFFSET))(this, output, buffer, leaveOpen, length, autoRelease);
		}

		::System::Void _ctor_3(::System::IO::Stream* output)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_3_OFFSET))(this, output);
		}

		::System::Void _ctor_4(::System::IO::Stream* output, ::System::Boolean leaveOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_4_OFFSET))(this, output, leaveOpen);
		}

		::System::Void _ctor_5(::System::IO::Stream* output, ::System::Int32 bufferSize, ::System::Boolean leaveOpen)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_5_OFFSET))(this, output, bufferSize, leaveOpen);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CCTOR_OFFSET))();
		}

		static ::System::Int32 ComputeUInt64Size(::System::UInt64 value)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEUINT64SIZE_OFFSET))(value);
		}

		static ::System::Int32 ComputeInt64Size(::System::Int64 value)
		{
			return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEINT64SIZE_OFFSET))(value);
		}

		static ::System::Int32 ComputeInt32Size(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEINT32SIZE_OFFSET))(value);
		}

		static ::System::Int32 ComputeFixed64Size(::System::UInt64 value)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEFIXED64SIZE_OFFSET))(value);
		}

		static ::System::Int32 ComputeFixed32Size(::System::UInt32 value)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEFIXED32SIZE_OFFSET))(value);
		}

		static ::System::Int32 ComputeStringSize(::System::String* value)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTESTRINGSIZE_OFFSET))(value);
		}

		static ::System::Int32 ComputeMessageSize(::Google::Protobuf::IMessage* value)
		{
			return ((::System::Int32(*)(::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEMESSAGESIZE_OFFSET))(value);
		}

		static ::System::Int32 ComputeBytesSize(::Google::Protobuf::ByteString* value)
		{
			return ((::System::Int32(*)(::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEBYTESSIZE_OFFSET))(value);
		}

		static ::System::Int32 ComputeUInt32Size(::System::UInt32 value)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEUINT32SIZE_OFFSET))(value);
		}

		static ::System::Int32 ComputeEnumSize(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEENUMSIZE_OFFSET))(value);
		}

		static ::System::Int32 ComputeSInt32Size(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTESINT32SIZE_OFFSET))(value);
		}

		static ::System::Int32 ComputeLengthSize(::System::Int32 length)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTELENGTHSIZE_OFFSET))(length);
		}

		static ::System::Int32 ComputeRawVarint32Size(::System::UInt32 value)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTERAWVARINT32SIZE_OFFSET))(value);
		}

		static ::System::Int32 ComputeRawVarint64Size(::System::UInt64 value)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTERAWVARINT64SIZE_OFFSET))(value);
		}

		static ::System::Int32 ComputeTagSize(::System::Int32 fieldNumber)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTETAGSIZE_OFFSET))(fieldNumber);
		}

		::System::Void WriteDouble(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEDOUBLE_OFFSET))(this, value);
		}

		::System::Void WriteFloat(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEFLOAT_OFFSET))(this, value);
		}

		::System::Void WriteUInt64(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEUINT64_OFFSET))(this, value);
		}

		::System::Void WriteInt64(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEINT64_OFFSET))(this, value);
		}

		::System::Void WriteInt32(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEINT32_OFFSET))(this, value);
		}

		::System::Void WriteFixed64(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEFIXED64_OFFSET))(this, value);
		}

		::System::Void WriteFixed32(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEFIXED32_OFFSET))(this, value);
		}

		::System::Void WriteBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEBOOL_OFFSET))(this, value);
		}

		::System::Void WriteString(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITESTRING_OFFSET))(this, value);
		}

		::System::Void WriteMessage(::Google::Protobuf::IMessage* value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEMESSAGE_OFFSET))(this, value);
		}

		::System::Void WriteBytes(::Google::Protobuf::ByteString* value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEBYTES_OFFSET))(this, value);
		}

		::System::Void WriteUInt32(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEUINT32_OFFSET))(this, value);
		}

		::System::Void WriteEnum(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEENUM_OFFSET))(this, value);
		}

		::System::Void WriteSInt32(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITESINT32_OFFSET))(this, value);
		}

		::System::Void WriteLength(::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITELENGTH_OFFSET))(this, length);
		}

		::System::Void WriteTag(::System::Int32 fieldNumber, ::Google::Protobuf::WireFormat_WireType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Google::Protobuf::WireFormat_WireType))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITETAG_OFFSET))(this, fieldNumber, type);
		}

		::System::Void WriteTag_1(::System::UInt32 tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITETAG_1_OFFSET))(this, tag);
		}

		::System::Void WriteRawTag(::System::Byte b1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_OFFSET))(this, b1);
		}

		::System::Void WriteRawTag_1(::System::Byte b1, ::System::Byte b2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_1_OFFSET))(this, b1, b2);
		}

		::System::Void WriteRawTag_2(::System::Byte b1, ::System::Byte b2, ::System::Byte b3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_2_OFFSET))(this, b1, b2, b3);
		}

		::System::Void WriteRawVarint32(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWVARINT32_OFFSET))(this, value);
		}

		::System::Void WriteRawVarint64(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWVARINT64_OFFSET))(this, value);
		}

		::System::Void WriteRawLittleEndian32(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWLITTLEENDIAN32_OFFSET))(this, value);
		}

		::System::Void WriteRawLittleEndian64(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWLITTLEENDIAN64_OFFSET))(this, value);
		}

		::System::Void WriteRawByte(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTE_OFFSET))(this, value);
		}

		::System::Void WriteRawBytes(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTES_OFFSET))(this, value);
		}

		::System::Void WriteRawBytes_1(::Il2CppArray<::System::Byte>* value, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTES_1_OFFSET))(this, value, offset, length);
		}

		static ::System::UInt32 EncodeZigZag32(::System::Int32 n)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_ENCODEZIGZAG32_OFFSET))(n);
		}

		::System::Void RefreshBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_REFRESHBUFFER_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_DISPOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Void CheckNoSpaceLeft()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_CHECKNOSPACELEFT_OFFSET))(this);
		}

		::System::Int32 get_SpaceLeft()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_GET_SPACELEFT_OFFSET))(this);
		}
	};
}
