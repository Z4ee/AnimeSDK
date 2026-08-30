#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/WireFormat_WireType.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class IMessage; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }

#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_CHECKNOSPACELEFT_OFFSET UNITYSDK_OFFSET(0x1AA79800)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEBYTESSIZE_OFFSET UNITYSDK_OFFSET(0x1AA77D40)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEENUMSIZE_OFFSET UNITYSDK_OFFSET(0x1AA77E40)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEFIXED32SIZE_OFFSET UNITYSDK_OFFSET(0x1AA77A20)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEFIXED64SIZE_OFFSET UNITYSDK_OFFSET(0x1AA77A10)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEINT32SIZE_OFFSET UNITYSDK_OFFSET(0x1AA77950)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEINT64SIZE_OFFSET UNITYSDK_OFFSET(0x1AA77890)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTELENGTHSIZE_OFFSET UNITYSDK_OFFSET(0x1AA77B60)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEMESSAGESIZE_OFFSET UNITYSDK_OFFSET(0x1AA77BD0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTERAWVARINT32SIZE_OFFSET UNITYSDK_OFFSET(0x1AA779D0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTERAWVARINT64SIZE_OFFSET UNITYSDK_OFFSET(0x1AA77810)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTESINT32SIZE_OFFSET UNITYSDK_OFFSET(0x1AA77ED0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTESTRINGSIZE_OFFSET UNITYSDK_OFFSET(0x1AA77A30)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTETAGSIZE_OFFSET UNITYSDK_OFFSET(0x1AA77F50)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEUINT32SIZE_OFFSET UNITYSDK_OFFSET(0x1AA77DD0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEUINT64SIZE_OFFSET UNITYSDK_OFFSET(0x1AA77750)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA79710)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_ENCODEZIGZAG32_OFFSET UNITYSDK_OFFSET(0x1AA77F40)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1AA797F0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_GET_SPACELEFT_OFFSET UNITYSDK_OFFSET(0x1AA79880)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_REFRESHBUFFER_OFFSET UNITYSDK_OFFSET(0x1AA79590)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEBOOL_OFFSET UNITYSDK_OFFSET(0x1AA78CC0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEBYTES_OFFSET UNITYSDK_OFFSET(0x1AA79310)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEDOUBLE_OFFSET UNITYSDK_OFFSET(0x1AA78300)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEENUM_OFFSET UNITYSDK_OFFSET(0x1AA79370)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEFIXED32_OFFSET UNITYSDK_OFFSET(0x1AA78B00)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEFIXED64_OFFSET UNITYSDK_OFFSET(0x1AA78AF0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEFLOAT_OFFSET UNITYSDK_OFFSET(0x1AA786A0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEINT32_OFFSET UNITYSDK_OFFSET(0x1AA78980)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEINT64_OFFSET UNITYSDK_OFFSET(0x1AA78970)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITELENGTH_OFFSET UNITYSDK_OFFSET(0x1AA790E0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1AA79110)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTES_1_OFFSET UNITYSDK_OFFSET(0x1AA74880)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTES_OFFSET UNITYSDK_OFFSET(0x1AA790F0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTE_OFFSET UNITYSDK_OFFSET(0x1AA78D10)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWLITTLEENDIAN32_OFFSET UNITYSDK_OFFSET(0x1AA78B10)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWLITTLEENDIAN64_OFFSET UNITYSDK_OFFSET(0x1AA78310)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_1_OFFSET UNITYSDK_OFFSET(0x1AA79440)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_2_OFFSET UNITYSDK_OFFSET(0x1AA794D0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_OFFSET UNITYSDK_OFFSET(0x1AA793F0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWVARINT32_OFFSET UNITYSDK_OFFSET(0x1AA789A0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWVARINT64_OFFSET UNITYSDK_OFFSET(0x1AA78840)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITESINT32_OFFSET UNITYSDK_OFFSET(0x1AA79390)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1AA78D60)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITETAG_1_OFFSET UNITYSDK_OFFSET(0x1AA793E0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITETAG_OFFSET UNITYSDK_OFFSET(0x1AA793D0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEUINT32_OFFSET UNITYSDK_OFFSET(0x1AA79360)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM_WRITEUINT64_OFFSET UNITYSDK_OFFSET(0x1AA78830)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA798D0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AA78010)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AA78040)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AA780C0)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1AA78230)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1AA78180)
#define GOOGLE_PROTOBUF_CODEDOUTPUTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA77FC0)

namespace Google::Protobuf
{
	inline static constexpr unsigned int CodedOutputStream_TypeDefinitionIndex = 5362;

	class CodedOutputStream : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_Utf8Encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(CodedOutputStream_TypeDefinitionIndex)->GetStaticField(0x1DA50);
		}
		static ::System::Int32* StaticGet_DefaultBufferSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CodedOutputStream_TypeDefinitionIndex)->GetStaticField(0x9F60);
		}
		::System::IO::Stream* output; // 0x10
		::Il2CppArray<::System::Byte>* buffer; // 0x18
		::System::Boolean autoRelease; // 0x20
		::System::Boolean leaveOpen; // 0x21
		::System::Int32 position; // 0x24
		::System::Int32 limit; // 0x28

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
