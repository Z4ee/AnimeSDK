#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/WireFormat_WireType.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class IMessage; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }

#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_CHECKNOSPACELEFT_OFFSET UNITYSDK_OFFSET(0x17E3B630)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEBYTESSIZE_OFFSET UNITYSDK_OFFSET(0x17E3A200)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEENUMSIZE_OFFSET UNITYSDK_OFFSET(0x17E3A300)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEFIXED32SIZE_OFFSET UNITYSDK_OFFSET(0x17E39FA0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEFIXED64SIZE_OFFSET UNITYSDK_OFFSET(0x17E39F90)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEINT32SIZE_OFFSET UNITYSDK_OFFSET(0x17E39ED0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEINT64SIZE_OFFSET UNITYSDK_OFFSET(0x17E39E10)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTELENGTHSIZE_OFFSET UNITYSDK_OFFSET(0x17E3A070)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEMESSAGESIZE_OFFSET UNITYSDK_OFFSET(0x17E3A0E0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTERAWVARINT32SIZE_OFFSET UNITYSDK_OFFSET(0x17E39F50)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTERAWVARINT64SIZE_OFFSET UNITYSDK_OFFSET(0x17E39D90)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTESINT32SIZE_OFFSET UNITYSDK_OFFSET(0x17E3A390)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTESTRINGSIZE_OFFSET UNITYSDK_OFFSET(0x17E39FB0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTETAGSIZE_OFFSET UNITYSDK_OFFSET(0x17E3A410)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEUINT32SIZE_OFFSET UNITYSDK_OFFSET(0x17E3A290)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEUINT64SIZE_OFFSET UNITYSDK_OFFSET(0x17E39CD0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17E3B560)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_ENCODEZIGZAG32_OFFSET UNITYSDK_OFFSET(0x17E3A400)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x17E3B5F0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_GET_SPACELEFT_OFFSET UNITYSDK_OFFSET(0x17E3B6B0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_REFRESHBUFFER_OFFSET UNITYSDK_OFFSET(0x17E3B450)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEBOOL_OFFSET UNITYSDK_OFFSET(0x17E3AEA0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEBYTES_OFFSET UNITYSDK_OFFSET(0x17E3B300)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEDOUBLE_OFFSET UNITYSDK_OFFSET(0x17E3A7C0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEENUM_OFFSET UNITYSDK_OFFSET(0x17E3B360)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEFIXED32_OFFSET UNITYSDK_OFFSET(0x17E3ADA0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEFIXED64_OFFSET UNITYSDK_OFFSET(0x17E3AD90)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEFLOAT_OFFSET UNITYSDK_OFFSET(0x17E3A9C0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEINT32_OFFSET UNITYSDK_OFFSET(0x17E3AC60)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEINT64_OFFSET UNITYSDK_OFFSET(0x17E3AC50)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITELENGTH_OFFSET UNITYSDK_OFFSET(0x17E3B180)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEMESSAGE_OFFSET UNITYSDK_OFFSET(0x17E3B1B0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTES_1_OFFSET UNITYSDK_OFFSET(0x17E37310)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTES_OFFSET UNITYSDK_OFFSET(0x17E3B190)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTE_OFFSET UNITYSDK_OFFSET(0x17E3AEB0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWLITTLEENDIAN32_OFFSET UNITYSDK_OFFSET(0x17E3ADB0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWLITTLEENDIAN64_OFFSET UNITYSDK_OFFSET(0x17E3A7D0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_1_OFFSET UNITYSDK_OFFSET(0x17E3B3F0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_2_OFFSET UNITYSDK_OFFSET(0x17E3B420)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_OFFSET UNITYSDK_OFFSET(0x17E3B3E0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWVARINT32_OFFSET UNITYSDK_OFFSET(0x17E3AC80)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWVARINT64_OFFSET UNITYSDK_OFFSET(0x17E3AB60)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITESINT32_OFFSET UNITYSDK_OFFSET(0x17E3B380)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x17E3AF40)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITETAG_1_OFFSET UNITYSDK_OFFSET(0x17E3B3D0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITETAG_OFFSET UNITYSDK_OFFSET(0x17E3B3C0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEUINT32_OFFSET UNITYSDK_OFFSET(0x17E3B350)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEUINT64_OFFSET UNITYSDK_OFFSET(0x17E3AB50)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E3B700)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E3A4D0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17E3A500)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_3_OFFSET UNITYSDK_OFFSET(0x17E3A580)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_4_OFFSET UNITYSDK_OFFSET(0x17E3A6F0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_5_OFFSET UNITYSDK_OFFSET(0x17E3A640)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3A480)

namespace Google::Protobuf
{
	inline static constexpr unsigned int CodedOutputStream_TypeDefinitionIndex = 5368;

	class CodedOutputStream : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_Utf8Encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(CodedOutputStream_TypeDefinitionIndex)->GetStaticField(0x3CA90);
		}
		static ::System::Int32* StaticGet_DefaultBufferSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CodedOutputStream_TypeDefinitionIndex)->GetStaticField(0xB650);
		}
		::Il2CppArray<::System::Byte>* buffer; // 0x10
		::System::IO::Stream* output; // 0x18
		::System::Boolean leaveOpen; // 0x20
		::System::Boolean autoRelease; // 0x21
		::System::Int32 limit; // 0x24
		::System::Int32 position; // 0x28

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_2(::System::IO::Stream* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_3(::System::IO::Stream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_3_OFFSET))(this, a1);
		}

		::System::Void _ctor_4(::System::IO::Stream* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_4_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_5(::System::IO::Stream* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_5_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CCTOR_OFFSET))();
		}

		static ::System::Int32 ComputeUInt64Size(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEUINT64SIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeInt64Size(::System::Int64 a1)
		{
			return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEINT64SIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeInt32Size(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEINT32SIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeFixed64Size(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEFIXED64SIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeFixed32Size(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEFIXED32SIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeStringSize(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTESTRINGSIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeMessageSize(::Google::Protobuf::IMessage* a1)
		{
			return ((::System::Int32(*)(::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEMESSAGESIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeBytesSize(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Int32(*)(::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEBYTESSIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeUInt32Size(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEUINT32SIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeEnumSize(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEENUMSIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeSInt32Size(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTESINT32SIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeLengthSize(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTELENGTHSIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeRawVarint32Size(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTERAWVARINT32SIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeRawVarint64Size(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTERAWVARINT64SIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeTagSize(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTETAGSIZE_OFFSET))(a1);
		}

		::System::Void WriteDouble(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEDOUBLE_OFFSET))(this, a1);
		}

		::System::Void WriteFloat(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEFLOAT_OFFSET))(this, a1);
		}

		::System::Void WriteUInt64(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEUINT64_OFFSET))(this, a1);
		}

		::System::Void WriteInt64(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEINT64_OFFSET))(this, a1);
		}

		::System::Void WriteInt32(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEINT32_OFFSET))(this, a1);
		}

		::System::Void WriteFixed64(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEFIXED64_OFFSET))(this, a1);
		}

		::System::Void WriteFixed32(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEFIXED32_OFFSET))(this, a1);
		}

		::System::Void WriteBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEBOOL_OFFSET))(this, a1);
		}

		::System::Void WriteString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITESTRING_OFFSET))(this, a1);
		}

		::System::Void WriteMessage(::Google::Protobuf::IMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void WriteBytes(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEBYTES_OFFSET))(this, a1);
		}

		::System::Void WriteUInt32(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEUINT32_OFFSET))(this, a1);
		}

		::System::Void WriteEnum(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEENUM_OFFSET))(this, a1);
		}

		::System::Void WriteSInt32(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITESINT32_OFFSET))(this, a1);
		}

		::System::Void WriteLength(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITELENGTH_OFFSET))(this, a1);
		}

		::System::Void WriteTag(::System::Int32 a1, ::Google::Protobuf::WireFormat_WireType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Google::Protobuf::WireFormat_WireType))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITETAG_OFFSET))(this, a1, a2);
		}

		::System::Void WriteTag_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITETAG_1_OFFSET))(this, a1);
		}

		::System::Void WriteRawTag(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_OFFSET))(this, a1);
		}

		::System::Void WriteRawTag_1(::System::Byte a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_1_OFFSET))(this, a1, a2);
		}

		::System::Void WriteRawTag_2(::System::Byte a1, ::System::Byte a2, ::System::Byte a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteRawVarint32(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWVARINT32_OFFSET))(this, a1);
		}

		::System::Void WriteRawVarint64(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWVARINT64_OFFSET))(this, a1);
		}

		::System::Void WriteRawLittleEndian32(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWLITTLEENDIAN32_OFFSET))(this, a1);
		}

		::System::Void WriteRawLittleEndian64(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWLITTLEENDIAN64_OFFSET))(this, a1);
		}

		::System::Void WriteRawByte(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTE_OFFSET))(this, a1);
		}

		::System::Void WriteRawBytes(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTES_OFFSET))(this, a1);
		}

		::System::Void WriteRawBytes_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTES_1_OFFSET))(this, a1, a2, a3);
		}

		static ::System::UInt32 EncodeZigZag32(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_ENCODEZIGZAG32_OFFSET))(a1);
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
